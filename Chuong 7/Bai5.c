#include <stdio.h>

void Nhap(int *a, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        printf("Nhập hàng %d\n", i + 1);
        for (int j = 0; j < column; j++)
            scanf("%d", (a + i * row + j));
    }
}

void Xuat(int *a, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d ", *(a + i * row + j));
        printf("\n");
    }
}

void Find(int *a, int row, int column)
{
    int num, t = 0;
    printf("Nhập số cần tìm: ");
    scanf("%d", &num);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (*(a + i + j) == num)
            {
                printf("%d xuất hiện ở hàng %d cột %d\n", num, i + 1, j + 1);
                t++;
            }
        }
    }
    t == 0 ? printf("Ma trận không có phần tử trùng ") : printf("Ma trận có %d phần tử trùng", t);
}
int main()
{
    int a[10][10], m, n;
    printf("Nhập số cột: ");
    scanf("%d", &n);
    printf("Nhập số hàng: ");
    scanf("%d", &m);
    Nhap(a, m, n);
    Xuat(a, m, n);
    Find(a, m, n);
    return 0;
}