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
}

void Minmax(int *a, int n)
{
    int min, max;
    min = max = a[0];
    for (int i = 1; i < n; i++)
    {
        *(a + i) > max ? max = *(a + i) : 0;
        *(a + i) < min ? min = *(a + i) : 0;
    }
    printf("Số lớn nhất: %d", max);
    printf("\nSố nhỏ nhất: %d", min);
}
void Sum(int *a, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += *(a + i);
    }
    printf("\nTổng của mảng: %d", s);
}
int main()
{
    int a[20], n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    Nhap(a, n);
    Minmax(a, n);
    Sum(a, n);
    return 0;
}