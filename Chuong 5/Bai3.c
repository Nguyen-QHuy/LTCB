#include <stdio.h>

void plot(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
    printf("\n");
}
int main()
{
    int a, b, c, d, e;
    printf("Nhập a = ");
    scanf("%d", &a);
    printf("Nhập b = ");
    scanf("%d", &b);
    printf("Nhập c = ");
    scanf("%d", &c);
    printf("Nhập d = ");
    scanf("%d", &d);
    printf("Nhập e = ");
    scanf("%d", &e);
    plot(a, 'a');
    plot(b, 'b');
    plot(c, 'c');
    plot(d, 'd');
    plot(e, 'e');
    return 0;
}