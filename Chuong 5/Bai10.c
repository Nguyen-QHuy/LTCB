#include <stdio.h>
#include <math.h>
int so_ngto(int n)
{

    for (int i = 2; i <= sqrt(n); i++)
    {
        int t = 0;
        while (n % i == 0)
        {
            t++;
            n /= i;
        }
        if (t != 0)
        {
            printf("%d", i);
            (t > 1) ? printf("^%d", t) : 0;
            (n > i) ? printf(" * ") : 0;
        }
    }
    n > 1 ? printf("%d", n) : 0;
    return 0;
}

int main()
{
    int n;
    printf("nhập n = ");
    scanf("%d", &n);
    so_ngto(n);
    return 0;
}