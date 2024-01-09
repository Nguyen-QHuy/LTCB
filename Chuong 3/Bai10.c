#include <stdio.h>

int main()
{
    unsigned int a, digit1, digit2, digit3;
    printf("Chương trình đảo ngược số\n");
    printf("Nhập số nguyên dương có 3 chữ số: ");
    scanf("%d", &a);
    digit1 = a / 100;
    digit2 = a % 100 / 10;
    digit3 = a % 10;
    printf("Số đảo ngược: %d%d%d", digit3, digit2, digit1);
    return 0;
}