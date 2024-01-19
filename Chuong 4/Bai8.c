#include <stdio.h>

int main()
{
    unsigned int a, S, digit1, digit2, digit3;
    printf("Chương trình đảo ngược số\n");
    printf("Nhập số nguyên dương có 3 chữ số: ");
    scanf("%3d", &a);
    digit1 = a / 100;
    digit2 = a % 100 / 10;
    digit3 = a % 10;
    S = digit1 + digit2 + digit3;
    if (S % 3 == 0)
    {
        printf("%d chia hết cho 3", a);
    }
    else
    {
        printf("%d không chia hết cho 3", a);
    }

    return 0;
}