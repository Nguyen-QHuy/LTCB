#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define EASY '1'
#define MEDIUM '2'
#define HARD '3'

#define BLUE 1
#define GREEN 2
#define AQUA 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define WHITE 7
#define GRAY 8

/*ban do min*/
#define MINE 9
#define EMPTY 0
int MineMap[20][20] = {0};

// ban do trang thai:
#define CLOSE 0
#define OPEN 1
#define FLAG 2
int StatusMap[20][20] = {0};

int So_min, col, col;
int flag_count;

void PrintColor(const char text[], int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
    printf("%s", text);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Trả về màu chữ mặc định
}

void demsolan()
{
    int So_lan = 0;
    FILE *file;
    file = fopen("solan.txt", "r");
    if (file != NULL)
    {                                // mo file len de doc
        fscanf(file, "%d", &So_lan); // nhu ham scanf, no se gan gia tri đoc tu file vao bien so
        So_lan++;                    // cong them 1 sau moi lan chay              // đoi mau cua chu
        PrintColor("-------------------------------------------------------------------\n", GREEN | GRAY);
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, GREEN | GRAY);
        printf("------------------ SO LAN DA CHAY FILE LA %d LAN ------------------\n", So_lan); // in ra số lần đã chạy
        PrintColor("---------------------------------------------------------\n", GREEN | GRAY);
        fclose(file); // đong file
    }
    file = fopen("solan.txt", "w"); // mo file đe ghi
    if (file != NULL)
    {
        fprintf(file, "%d", So_lan); // nhu ham printf nhung khong in ra mang hinh ma la in vào file gia tri cua num
        fclose(file);
    }
}

void Tao_min()
{
    int i = 0, x, y;
    srand(time(NULL)); // tao seed random
    while (i < So_min) // khi so min chua dat toi da thi tiep tuc them
    {
        x = rand() % col;
        y = rand() % col;
        if (MineMap[x][y] == 0) // neu vi tri x;y chua co min thi them min
        {
            MineMap[x][y] = 9;
            i++;
        }
    }
}

void Dem_min()
{
    int count, r, c;
    // xet tung o trong bang
    for (c = 0; c < col; c++)
    {
        for (r = 0; r < col; r++)
        {
            // kiem tra lan luot 8 o xung quanh o dang xet
            count = 0;
            for (int i = -1; i <= 1; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    if ((r + i >= 0 && r + i < col) && (c + j >= 0 && c + j < col) && (i != 0 || j != 0)) // kiểm tra các ô xung quanh có nằm ngoài mảng không
                    {
                        if (MineMap[r + i][c + j] == MINE) // neu o xung quanh o dang xet co min thi count+1
                            count++;
                    }
                }
            }
            // neu o dang xet khong phai o min thì o do mang gia tri count
            if (MineMap[r][c] != MINE)
            {
                MineMap[r][c] = count;
            }
        }
    }
}

void Mo_o(int r, int c)
{
    int i, j;
    if (StatusMap[r][c] == OPEN || StatusMap[r][c] == FLAG) // neu o da duoc mo hoac duoc cam co thi bo qua
        return;
    StatusMap[r][c] = OPEN;     // chuyen trang thai o dang xet thanh da mo
    if (MineMap[r][c] == EMPTY) // neu o dang xet la o trong goi de quy mo 8 o xung quanh no
    {
        for (i = -1; i <= 1; i++)
        {
            for (j = -1; j <= 1; j++)
                if ((r + i >= 0 && r + i < col) && (c + j >= 0 && c + j < col) && (i != 0 || j != 0))
                    if (StatusMap[r + i][c + j] == CLOSE)
                        Mo_o(r + i, c + j);
        }
    }
}

void printMap()
{
    // in so cot
    printf(" ");
    for (int t = 0; t < col; t++)
        printf(" %d", (t + 1) % 10);
    printf("\n");
    // in so hang va trang thai o
    for (int i = 0; i < col; i++)
    {
        for (int j = -1; j < col; j++)
        {
            if (j == -1) // in so hang
            {
                printf("%d ", (i + 1) % 10);
            }
            else if (StatusMap[i][j] == CLOSE) // neu o trang thai dong
            {
                PrintColor("# ", GREEN);
            }
            else if (StatusMap[i][j] == FLAG) // neu o trang thai cam co
            {
                PrintColor("P ", RED | GRAY);
            }
            else // neu o trang thai mo
            {
                switch (MineMap[i][j])
                {
                case EMPTY: // neu o trong thi in "."
                    PrintColor(". ", GRAY);
                    break;
                case MINE:
                    PrintColor("X ", RED); // neu o chua min thì in "X"
                    break;
                default:
                    MineMap[i][j] == 1   ? PrintColor("1 ", AQUA)
                    : MineMap[i][j] == 2 ? PrintColor("2 ", YELLOW)
                    : MineMap[i][j] == 3 ? PrintColor("3 ", PURPLE)
                    : MineMap[i][j] == 4 ? PrintColor("4 ", BLUE)
                                         : printf("%d ", MineMap[i][j]); // in so min xung quanh o
                    break;
                }
            }
        }
        printf("\n");
    }
}
/*Tra ve so o con lai chua duoc mo*/
int So_o_con_lai()
{
    int count = 0, i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (StatusMap[i][j] != OPEN)
                count += 1;
        }
    }
    return count;
}
/*Tra ve ket qua thang thua cua nguoi choi
 *return 1: nguoi choi thang
 *return -1: nguoi choi thua
 *return 0: chua xac dinh*/
int Kiem_tra(int r, int c)
{
    int win = 0;
    if (MineMap[r][c] == MINE)
    {
        win = -1;
        return win;
    }
    if (So_o_con_lai() == So_min)
    {
        win = 1;
        return win;
    }
    if (flag_count == So_min)
    {
        win = 1;
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (StatusMap[i][j] == FLAG && MineMap[i][j] != MINE)
                    win = 0;
            }
        }
    }
    return win;
}

void Cam_co(int r, int c)
{
    if (StatusMap[r][c] == CLOSE && flag_count < So_min)
    {
        StatusMap[r][c] = FLAG;
        flag_count++;
    }
    else if (StatusMap[r][c] == FLAG)
    {
        StatusMap[r][c] = CLOSE;
        flag_count--;
    }
}

void Chon_level()
{
    char level;
    PrintColor("\n------------------ HAY CHON DO KHO CHO TRO CHOI ------------------\n\n", YELLOW | GRAY);
    PrintColor("Nhap \"1\" de chon che do DE (9x9, 10 qua min) \n", PURPLE | GRAY);
    PrintColor("Nhap \"2\" de chon che do TRUNG BINH (13x13, 20 qua min) \n", PURPLE | GRAY);
    PrintColor("Nhap \"3\" de chon che do KHO (20x20, 30 qua min) \n", PURPLE | GRAY);
    PrintColor("Nhap \"4\" de thoat khoi tro choi\n", PURPLE | GRAY);
    fflush(stdin);
    scanf("%c", &level);
    switch (level)
    {
    case EASY:
        col = 9;
        So_min = 3;
        break;
    case MEDIUM:
        col = 13;
        So_min = 20;
        break;
    case HARD:
        col = 20;
        So_min = 30;
        break;
    case 4:
        exit(0);
        break;
    default:
        system("cls");
        PrintColor("Che do khong hop le, xin hay nhap lai!\n", RED | GRAY);
        Chon_level();
        break;
    }
    system("cls");
}

void Choi_lai()
{
    char selection;
    PrintColor("1.Choi lai \n", GREEN | GRAY);
    PrintColor("2.Chon do kho\n", GREEN | GRAY);
    PrintColor("3.Thoat \n", GREEN | GRAY);
    while (1)
    {
        fflush(stdin);
        scanf("%c", &selection);
        switch (selection)
        {
        case '1':
            system("cls");
            return;
        case '2':
            system("cls");
            Chon_level();
            return;
        case '3':
            exit(0);
            break;
        default:
            PrintColor("Che do khong hop le, xin hay nhap lai!\n", RED | GRAY);
            break;
        }
    }
    system("cls");
}

void Newgame()
{
    // reset mảng
    int i, j;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < col; j++)
        {
            MineMap[i][j] = 0;
            StatusMap[i][j] = 0;
        }
    }
    flag_count = 0;
    int Is_flag_on = 0; // trang thai cam co
    int x, y;
    Tao_min();
    Dem_min();
    printMap();
    while (1)
    {
        PrintColor("-------------------------------------------------------------------\n", BLUE | GRAY);
        PrintColor("Chon hang 0 va cot 0 de thoat khoi tro choi\n", BLUE | GRAY);
        PrintColor("Chon hang 0 va cot 1 de chon lai che do\n", BLUE | GRAY);
        PrintColor("Chon hang 1 va cot 0 de cam co, chon tuong tu de dung cam co\n", BLUE | GRAY);
        PrintColor("-------------------------------------------------------------------\n", BLUE | GRAY);
        PrintColor("Trang thai: ", PURPLE | GRAY);
        Is_flag_on == 0 ? PrintColor("Mo o\n", YELLOW | GRAY) : PrintColor("Cam co\n", YELLOW | GRAY);
        PrintColor("Nhap toa do o\n", GREEN | GRAY);
        PrintColor("Hang: ", GREEN | GRAY);
        scanf("%d", &x);
        PrintColor("Cot: ", GREEN | GRAY);
        scanf("%d", &y);

        if (x == 0 && y == 0) // thoat chuong trinh
            exit(0);
        if (x == 0 && y == 1) // thoat ham newgame de chon lai level
        {
            system("cls");
            Chon_level();
            return;
        }

        if (x == 1 && y == 0)
        {
            Is_flag_on = !Is_flag_on; // dao trang thai cam co
            system("cls");
            printMap();
            continue;
        }

        if (x > col || y > col) // bao loi neu x hoac y lon hon ban choi
        {
            system("cls");
            printMap();
            PrintColor("Toa do khong hop le, xin hay nhap lai!!!\n", RED);
            continue;
        }
        x--; // dua x, y tu gia tri hang, cot ve chi so ma tran
        y--;
        if (Is_flag_on) // khi Is_flag_on = 1 (true)
        {
            Cam_co(x, y);
            system("cls");
            printMap();
            if (flag_count == So_min) // bao loi cam het co
                PrintColor("Ban da het co !!!\n", RED);
        }
        else
        {
            Mo_o(x, y);
            system("cls");
            printMap();
        }
        if (Kiem_tra(x, y) != 0)
        {
            system("cls");
            if (Kiem_tra(x, y) == -1)
                PrintColor("\n================= BAN DA THUA ==================\n", YELLOW | GRAY);
            if (Kiem_tra(x, y) == 1)
                PrintColor("\n================== BAN DA CHIEN THANG ==================\n", YELLOW | GRAY);
            for (i = 0; i < col; i++)
                for (j = 0; j < col; j++)
                    Mo_o(i, j);
            printMap();
            Choi_lai();
            return;
        }
    }
}

int main()
{
    system("cls");
    demsolan();
    Chon_level();
    while (1)
        Newgame();
    return 0;
}