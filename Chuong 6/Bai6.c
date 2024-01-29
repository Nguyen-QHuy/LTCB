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

void Transform(int a[][10], int row)
{
    int temp;
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;

        }
    }
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
    Transform(a, m);
    Xuat(a, m, n);
    return 0;
}