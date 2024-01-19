#include <stdio.h>
#include <math.h>

int UCLN(int a, int b)
{
    int r = 1;
    while (r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int a, b;
    printf("Nhập tử số: ");
    scanf("%d", &a);
    printf("Nhập mẫu số: ");
    scanf("%d", &b);
    (UCLN(a, b) == 1) ? printf("Phân số tối giản") : printf("Phân số chưa tối giản");
    return 0;
}