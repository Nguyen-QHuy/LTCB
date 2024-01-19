#include <stdio.h>

int tongchuso(int a)
{
    int S = 0;
    while (a > 0)
    {
        S += a % 10;
        a /= 10;
    }
    return S;
}

int main()
{
    int n;
    printf("Nhập số nguyên n = ");
    scanf("%d", &n);
    (tongchuso(n) % 3 == 0) ? printf("%d chia hết cho 3", n) : printf("%d không chia hết cho 3", n);
    return 0;
}