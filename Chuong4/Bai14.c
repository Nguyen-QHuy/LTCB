#include <stdio.h>

int main()
{
    char a, b;
    int value;
    printf("Nhập số HEX: 0x");
    scanf("%c%c", &a, &b);
    if (((a >= 48 && a <= 57) || (a >= 65 && a <= 70)) && ((b >= 48 && b <= 57) || (b >= 65 && b <= 70)))
    {
        (a >= 48) && (a <= 57) ? (a -= 48) : (a-= 55);
        (b >= 48) && (b <= 57) ? (b -= 48) : (b-= 55);
        value = a * 16 + b;
        printf("Giá trị mã hex = %d", value);
    }
    else
    {
        printf("Hệ thập lục phân không dùng ký số này");
    }

    return 0;
}