#include <stdio.h>

void Nhap(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhập hàng %d\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%f", a + i * n + j);
        }
    }
}

void Xuat(float *a, int n)
{
    printf("Ma tran sau bien doi:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f ", *(a + i * n + j));
        }
        printf("\n");
    }
}

void cheo_hoa(float *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            float ratio = *(a + k * n + i) / *(a + i * (n + 1));
            for (int j = i; j < n; j++)
            {
                *(a + k * n + j) -= ratio * *(a + i * n + j);
            }
        }
    }
}

int main()
{
    int n;
    float a[10][10];
    printf("Nhap cap cua ma tran: ");
    scanf("%d", &n);

    Nhap(a, n);
    cheo_hoa(a, n);
    Xuat(a, n);

    return 0;
}