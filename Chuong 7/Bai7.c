#include <stdio.h>
#include <math.h>

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

void odd(int *a, int n)
{
    int t = 0, oddArray[n];
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) & 1)
        {
            *(oddArray + t) = *(a + i);
            t++;
        }
    }
    printf("Có %d số lẻ ", t);
    Xuat(oddArray, t);
}

void even(int *a, int n)
{
    int t = 0, evenArray[n];
    for (int i = 0; i < n; i++)
    {
        if (!(*(a + i) & 1))
        {
            *(evenArray + t) = *(a + i);
            t++;
        }
    }
    printf("\nCó %d số chẵn ", t);
    Xuat(evenArray, t);
}

void prime(int *a, int n)
{
    int t = 0;
    printf("Các số nguyên tố là: ");
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) > 2)
            for (int j = 2; j <= sqrt(*(a + i)); j++)
            {
                if (*(a + i) % j == 0)
                    t++;
            }
        (t == 0) ? printf("%d ", *(a + i)) : 0;
        t = 0;
    }
}

void nonprime(int *a, int n)
{
    int t = 0;
    printf("\nCác số không là số nguyên tố là: ");
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) > 2)
            for (int j = 2; j <= sqrt(*(a + i)); j++)
            {
                if (*(a + i) % j == 0)
                    t++;
            }
        (t != 0) ? printf("%d ", *(a + i)) : 0;
        t = 0;
    }
}

void prime2(int *a, int n)
{
    int t, x, y, primeArray[n], nonprimeArray[n];
    t = x = y = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) > 2)
            for (int j = 2; j <= sqrt(*(a + i)); j++)
            {
                if (*(a + i) % j == 0)
                    t++;
            }
        if (t == 0)
        {
            *(primeArray + x) = *(a + i);
            x++;
        }
        else
        {
            *(nonprimeArray + y) = *(a + i);
            y++;
        }
        t = 0;
    }
    if (x != 0)
    {
        printf("\nCó %d số nguyên tố: ", x);
        Xuat(primeArray, x);
    }
    else
        printf("\nKhông có số nguyên tố");
    if (y != 0)
    {
        printf("\nCó %d số không phải số nguyên tố: ", y);
        Xuat(nonprimeArray, y);
    }
}

int main()
{
    int a[20], n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    Nhap(a, n);
    odd(a, n);
    even(a, n);
    prime2(a, n);
    // prime(a, n);
    //  nonprime(a, n);
    return 0;
}