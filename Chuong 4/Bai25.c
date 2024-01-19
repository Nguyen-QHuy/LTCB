#include <stdio.h>

int main()
{
    int a, b, ucln, bcnn, r = 1, x, y;
    printf("Nhập a=");
    scanf("%d", &a);
    printf("Nhập b=");
    scanf("%d", &b);
    x = a;
    y = b;
    while (r != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    ucln = x;
    bcnn = a * b / ucln;
    printf("UCLN = %d \nBCNN = %d", ucln, bcnn);
    return 0;
}