#include <stdio.h>

int main()
{
    unsigned char a;
    printf("Chương trình in ra mã ASCII của 1 ký tự \n");
    printf("Nhập vào ký tự: ");
    scanf("%c", &a);
    printf("Mã ASCII của ký tự \"%c\" là: %d", a, a);
    printf("\nKý tự kế tiếp ký tự \"%c\" là: %c", a, a+1);
    return 0;
}