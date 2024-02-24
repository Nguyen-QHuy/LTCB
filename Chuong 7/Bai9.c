#include <stdio.h>

void Nhap(int *a, int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", (a + i));
}

void Xuat(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
}

void inverse(int *a, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = *(a + i);
        *(a + i) = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main()
{
    int a[20], n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    Nhap(a, n);
    inverse(a, n);
    Xuat(a, n);
    return 0;
}