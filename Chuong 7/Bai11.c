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

void multiMatrix(int *a, int *b, int m, int k, int n)
{
    int c[10][10], *pc = c;
    printf("Ma trận tích C là: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *pc = 0;
            for (int t = 0; t < k; t++)
            {
                *pc += *(a + i * m + t) * *(b + t * k + j);
            }
            pc++;
        }
    }
    Xuat(c, m, n);
}
int main()
{
    int a[10][10], b[10][10], m, k, n;
    printf("Nhập số hàng ma trận A: ");
    scanf("%d", &m);
    printf("Nhập số cột ma trận A: ");
    scanf("%d", &k);
    printf("Nhập số cột ma trận B: ");
    scanf("%d", &n);
    printf("Nhập ma trận A:\n");
    Nhap(a, m, k);
    printf("Nhập ma trận B:\n");
    Nhap(b, k, n);
    printf("Ma trận A:\n");
    Xuat(a, m, k);
    printf("Ma trận B:\n");
    Xuat(b, k, n);
    multiMatrix(a, b, m, k, n);
    return 0;
}