#include <stdio.h>

void Nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void sum_of_square(int a[], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
        a[i] < 0 ? sum += a[i] * a[i] : 0;
    printf("Tổng bình phương các số âm là: %d", sum);
}

int main()
{
    int a[20], n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    Nhap(a, n);
    sum_of_square(a, n);
    return 0;
}