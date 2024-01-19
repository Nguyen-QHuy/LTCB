#include <stdio.h>

int main()
{
    char a;
    printf("Nhập ký tự: ");
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
    {
        printf("%c là ký tự chữ hoa", a);
    }
    else if (a >= 97 && a <= 122)
    {
        printf("%c là ký tự chữ thường", a);
    }
    else if (a >= 48 && a <= 57)
    {
        printf("%c là ký tự chữ số", a);
    }else {
        printf("%c là các ký tự khác", a);
    }

    return 0;
}