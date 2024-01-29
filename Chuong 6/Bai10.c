#include <stdio.h>

void Nhap(int a[][10], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        printf("Nhập hàng %d\n", i + 1);
        for (int j = 0; j < column; j++)
            scanf("%d", &a[i][j]);
    }
}

void Xuat(int a[][10], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void sumMatrix(int a[][10], int b[][10], int row, int column)
{
    int c[10][10];
    printf("Ma trận tổng C là: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    Xuat(c, row, column);
}
int main()
{
    int a[10][10], b[10][10], m, n;
    printf("Nhập số hàng: ");
    scanf("%d", &m);
    printf("Nhập số cột: ");
    scanf("%d", &n);
    Nhap(a, m, n);
    Nhap(b, m, n);
    printf("Ma trận A:\n");
    Xuat(a, m, n);
    printf("Ma trận B:\n");
    Xuat(b, m, n);
    sumMatrix(a, b, m, n);
    return 0;
}