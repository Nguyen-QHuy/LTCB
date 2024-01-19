#include <stdio.h>

int main()
{
    int a, b;
    char ch;
    printf("Nhập a = ");
    scanf("%d", &a);
    printf("Nhập b = ");
    scanf("%d", &b);
    fflush(stdin);
    printf("Nhập phép tính:");
    scanf("%c", &ch);
    switch (ch)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        b == 0 ? printf("Không chia được cho 0") : printf("%d / %d = %.2f", a, b, (float)a / b);
        break;
    default:
        printf("Sai cú pháp");
        break;
    }
    return 0;
}