#include <stdio.h>

void Nhap(float a[][10], int n)
{
    printf("Nhap ma tran:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
}

void Xuat(float a[][10], int n)
{
    printf("Ma tran sau bien doi:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}

void cheo_hoa(float a[][10], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            float ratio = a[k][i] / a[i][i];
            for (int j = i; j < n; j++)
            {
                a[k][j] -= ratio * a[i][j];
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