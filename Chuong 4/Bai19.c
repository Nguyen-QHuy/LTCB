#include <stdio.h>

int main()
{
    int a = 1, k = 0, n;
    printf("Nhập một số nguyên n=");
    scanf("%d", &n);
    while (a <= n)
    {
        a *= 2;
        k += 1;
    }
    printf("2^%d > %d", k, n);
    return 0;
}