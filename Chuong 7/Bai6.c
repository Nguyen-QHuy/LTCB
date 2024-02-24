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

void Transform(int *a, int row)
{
    int temp;
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            temp = *(a + i * row + j);
            *(a + i * row + j) = *(a + j * row + i);
            *(a + j * row + i) = temp;
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