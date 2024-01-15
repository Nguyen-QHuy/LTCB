#include <stdio.h>
int main()
{
    unsigned int mode, player1, player2;
    printf("Game Oẳn tù tì \nHai người chơi-1 \nChơi với máy-2 \nChọn chế độ chơi: ");
    scanf("%d", &mode);
    switch (mode)
    {
    case 1:
        printf("Kéo - 1 \nBúa - 2 \nBao - 3\n");
        printf("Người chơi 1: ");
        scanf("%d", &player1);
        printf("Người chơi 2: ");
        scanf("%d", &player2);
        break;
    case 2:
        printf("Kéo - 1 \nBúa - 2 \nBao - 3\n");
        printf("Người chơi 1: ");
        scanf("%d", &player1);
        player2 = player1 % 3 + 1;
        break;
    default:
        printf("Lỗi cú pháp");
        break;
    }
    if ((player1 - player2 == 1) || (player1 - player2 == -2))
    {
        printf("Kết quả: Người chơi 1 thắng");
    }
    else
    {
        printf("Kết quả: Người chơi 2 thắng");
    }

    return 0;
}