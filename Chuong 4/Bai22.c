#include <stdio.h>

int main()
{
    int a, b, t, div = 0;
    printf("Nhập a=");
    scanf("%d", &a);
    printf("Nhập b=");
    scanf("%d", &b);
    t = a;
    while (t >= b)
    {
        t -= b;
        div++;
    }
    printf("%d/%d=%d", a, b, div);
    return 0;
}