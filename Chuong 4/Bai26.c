#include <stdio.h>
#include <math.h>
int main()
{
    int n, t = 0;
    printf("Nhập một số nguyên n=");
    scanf("%d", &n);
    printf("Các số nguyên tố < %d là:\n", n);
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                t++;
        }
        if (t == 0)
            printf("%d ", i);
        t = 0;
    }

    return 0;
}