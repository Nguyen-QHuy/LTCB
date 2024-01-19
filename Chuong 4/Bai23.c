#include <stdio.h>

int main()
{
    int n = 1;
    float S, sum = 0;
    printf("Nhập một số nguyên S=");
    scanf("%f", &S);
    while (sum < S)
    {
        sum += (float)1 / n;
        n == 1 ? printf("1") : printf(" + 1/%d", n);
        n++;
    }
    printf(" < %.2f", S);
    return 0;
}