#include <stdio.h>

int main()
{
    int n, S1 = 0, S3 = 0;
    float S2 = 0;
    printf("Nhập n = ");
    scanf("%d", &n);
    //S=1+2+..+n
    for (int i = 1; i <= n; i++)
    {
        S1 += i;
        (i == 1) ? printf("1") : printf(" + %d", i);
    }
    printf(" = %d\n", S1);
    //s=1/2+2/3+...+n/(n+1)
    for (int i = 1; i <= n; i++)
    {
        S2 += (float)i / (i + 1);
        (i == 1) ? printf("1/2") : printf(" + %d/%d", i, i + 1);
    }
    printf(" = %.5f\n", S2);
    //s=-1+2-3+4...
    for (int i = 1; i <= n; i++)
    {
        (i & 1) == 1 ? (S3 -= i) : (S3 += i);
        (i & 1) == 1 ? printf(" - %d", i) : printf(" + %d", i);
    }
    printf(" = %d", S3);
    return 0;
}