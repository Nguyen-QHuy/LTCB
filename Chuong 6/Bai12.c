#include <stdio.h>

void Nhap(float a[][10], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        printf("Nhập hàng %d\n", i + 1);
        for (int j = 0; j < column; j++)
            scanf("%f", &a[i][j]);
    }
}

void Xuat(float a[][10], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%f ", a[i][j]);
        printf("\n");
    }
}

void cheo_hoa(float a[][10], int n)
{
    for (int i = 0; i < n - 1; i++) // xét cột i
    {
        for (int k = i + 1; k < n; k++) // xét phần tử a[k,i]
        {
            if (a[k][i] != 0) // nếu a[k,i] khác 0
            {

                for (int t = 0; t < n; t++)
                {
                    a[k][t] *=(float) -a[i][i] / a[k][i]; // nhân toàn bộ hàng k với -a[i,i]/a[k,i]
                    a[k][t] += a[i][t];            // lấy hàng i cộng hàng k
                }
                // đổi chỗ 2 hàng i & k
                float temp;
                for (int t = 0; t < n; t++)
                {
                    temp = a[i][t];
                    a[i][t] = a[k][t];
                    a[k][t] = temp;
                    a[k][t] *= -1;
                }
            }
        }
    }
}
int main()
{
    int n;
    float a[10][10];
    printf("Ma trận A vuông cấp: ");
    scanf("%d", &n);
    printf("Nhập ma trận A:\n");
    Nhap(a, n, n);
    cheo_hoa(a, n);
    Xuat(a, n, n);
    return 0;
}