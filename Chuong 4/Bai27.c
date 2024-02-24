#include <stdio.h>
#include <math.h>
int main()
{
    float a, x1, x2, y;
    const float e = 0.01;
    printf("Nhập một số nguyên a=");
    scanf("%f", &a);
    x2 = (1 + a) / 2;
    do
    {
        x1 = x2;
        x2 = (x1 + a / x1) / 2;
        y =fabs(((x2 - x1) / x1));
    } while (y >= e);
    printf("%f", x2);
    return 0;
}