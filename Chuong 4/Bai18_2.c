#include <stdio.h>

int main()
{
    int n, i=0;
    printf("Nhập một số nguyên n=");
    scanf("%d", &n);
    while (n > 0)
    {
        n /= 10;
        i += 1;
    }
    printf("Số vừa nhập có %d chữ số", i);
    return 0;
}