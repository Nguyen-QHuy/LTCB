#include <stdio.h>

void Nhap(int a[], int n)
{
    scanf("%d", &a[0]);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < a[i - 1])
        {
            printf("Nhập lại:\n");
            Nhap(a, n);
            break;
        }
    }
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void combine(int a[], int n, int b[], int m)
{
    int c[20], i = 0, j = 0;
    for (int t = 0; t < n + m; t++)
    {
        if (a[i] == b[j])
        {
            c[t]=c[t+1]=a[i];
            i++;
            j++;
            t++;
        }
        else if (a[i] < b[j])
        {
            if (a[i] != 0)
            {
                c[t] = a[i];
                i++;
            }
            else
            {
                c[t] = b[j];
            }
        }
        else
        {
            if (b[j] != 0)
            {
                c[t] = b[j];
                j++;
            }
            else
            {
                c[t] = a[i];
            }
        }
    }
    Xuat(c, n + m);
}
int main()
{
    int a[20], b[20], m, n;
    printf("Nhập số phần tử của mảng 1: ");
    scanf("%d", &n);
    printf("Nhập mảng 1:\n");
    Nhap(a, n);
    printf("Nhập số phần tử của mảng 2: ");
    scanf("%d", &m);
    printf("Nhập mảng 2:\n");
    Nhap(b, m);
    combine(a, n, b, m);
    return 0;
}