#include <stdio.h>

int main()
{
    unsigned long int n, P=1;
    printf("Nhập một số nguyên n=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        P*=2*i;
        i==1? printf("2"):printf("*%d", 2*i);
    }
    printf(" = %d", P);
    return 0;
}