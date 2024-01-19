#include <stdio.h>
#include <math.h>
int main()
{
    int a, n;
    double x1n = 1, x2, y;
    const float e = 0.01;
    printf("Nhập một số nguyên a=");
    scanf("%d", &a);
    printf("Nhập căn bậc n=");
    scanf("%d", &n);
    if ((a < 0) && (n & 1) == 0)
    {
        printf("Không tồn tại căn");
    }
    else
    {
        x2 = (float)a / n;
        do
        {
            for (int i = 1; i <= n; i++)
                x1n *= x2;

            x2 = ((n - 1) * x1n + a) / (n * x1n / x2);
            if (x2 < 0)
                x2 *= -1;

            y = a - x1n;
            if (y < 0)
                y *= -1;

            x1n = 1;
        } while (y >= e);
        printf("%f", x2);
    }
    return 0;
}