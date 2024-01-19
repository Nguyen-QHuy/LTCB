#include <stdio.h>

int giaithua(int n)
{
    if (n == 0)
        return 1;
    else
        return n * giaithua(n - 1);
}
int luythua(int n, int pow)
{
    if (pow == 0)
        return 1;
    else if (pow == 1)
        return n;
    else
        return n * luythua(n, pow - 1);
}
int main()
{
    int n, x, S1 = 0, S2 = 0;
    float S3 = 0;
    printf("nhập n = ");
    scanf("%d", &n);
    printf("nhập x = ");
    scanf("%d", &x);
    for (int i = 0; i <= n; i++)
    {
        i == 0 ? printf("1") : i == 1 ? printf(" + %d", x)
                                      : printf(" + %d^%d", x, i);
        S1 += luythua(x, i);
    }
    printf(" = %d\n", S1);

    for (int i = 0; i <= n; i++)
    {
        i == 0 ? printf("1") : i == 1     ? printf(" - %d", x)
                           : (i & 1) == 0 ? printf(" + %d^%d", x, i)
                                          : printf(" - %d^%d", x, i);
        S2 += luythua(-1, i) * luythua(x, i);
    }
    printf(" = %d\n", S2);

    for (int i = 0; i <= n; i++)
    {
        i == 0 ? printf("1") : i == 1 ? printf(" + %d", x)
                                      : printf(" + %d^%d/%d!", x, i, i);
        S3 += (float)luythua(x, i) / giaithua(i);
    }
    printf(" = %f\n", S3);

    return 0;
}