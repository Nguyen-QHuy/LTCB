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

void Sort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) >= *(a + j))
            {
                *(a + i) *= *(a + j);
                *(a + j) = *(a + i) / *(a + j);
                *(a + i) = *(a + i) / *(a + j);
            }
        }
    }
}

int Duplicate(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (*(a + i) == *(a + i + 1))
        {
            *(a + i + 1) = *(a + i + 2);
            n--;
            continue;
        }
    }
    return n;
}

int main()
{
    int a[20], n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    Nhap(a, n);
    Sort(a, n);
    n = Duplicate(a, n);
    Xuat(a, n);
    return 0;
}