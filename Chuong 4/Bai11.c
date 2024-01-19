#include <stdio.h>

int main()
{
    int sec, min, hour, a;
    printf("Nhập thời gian:\n");
    scanf("%2d %2d %2d", &hour, &min, &sec);
    printf("Nhập số giây cộng thêm: ");
    scanf("%d",&a);
    if ((sec > 59) || (min > 59) || (hour > 23))
    {
        printf("Sai thời gian");
    }
    else
    {
        sec += a;
        if (sec > 59)
        {
            sec = 00;
            min += 1;
        }
        if (min > 59)
        {
            min = 00;
            hour += 1;
        }
        if (hour > 23)
        {
            hour = 00;
        }
        printf("%2d:%2d:%2d", hour, min, sec);
    }

    return 0;
}