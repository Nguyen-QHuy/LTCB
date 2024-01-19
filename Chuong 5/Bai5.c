#include <stdio.h>

int giaithua(int n)
{
    if (n == 0)
        return 1;
    else
        return n * giaithua(n - 1);
}

int tohop(int k, int n)
{
    return giaithua(n) / (giaithua(k) * giaithua(n - k));
}

int main()
{
    int n;
    printf("nhập n = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", tohop(j, i));
        }
        printf("\n");
    }
    return 0;
}