#include <stdio.h>

void Nhap(int *a, int n)
{
    scanf("%d", a);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", (a + i));
        if (*(a + i) < *(a + i - 1))
        {
            printf("Nhập lại:\n");
            Nhap(a, n);
            break;
        }
    }
}

void Xuat(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
}

void Chen(int *a, int n)
{
    int num;
    printf("\nNhập số mới: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (num <= *(a + i))
        {
            for (int j = n; j > i; j--)
                *(a + j) = *(a + j - 1);
            *(a + i) = num;
            break;
        }
    }
    Xuat(a, n + 1);
}
int main()
{
    int a[20], n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    Nhap(a, n);
    Xuat(a, n);
    Chen(a, n);
    return 0;
}