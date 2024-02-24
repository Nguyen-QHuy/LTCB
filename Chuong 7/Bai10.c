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

void sumMatrix(int *a, int *b, int row, int column)
{
    int c[10][10], *pc = c;
    printf("Ma trận tổng C là: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            *pc = *(a + i * row + j) + *(b + i * row + j);
            pc++;
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