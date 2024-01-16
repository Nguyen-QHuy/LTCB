#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Nhập ngày: ");
    scanf("%2d", &day);
    printf("Nhập tháng:");
    scanf("%2d", &month);
    printf("Nhập năm:");
    scanf("%4d", &year);

    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        if (day > 30)
        {
            printf("Không có ngày này trong tháng");
        }
        else
        {
            day += 1;
            if (day > 30)
            {
                day = 01;
                month += 1;
            }
            printf("Ngày hôm sau là: %2d/%2d/%4d", day, month, year);
        }
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            if (day > 29)
            {
                printf("Không có ngày này trong tháng");
            }
            else
            {
                day += 1;
                if (day > 29)
                {
                    day = 01;
                    month += 1;
                }
                printf("Ngày hôm sau là: %2d/%2d/%4d", day, month, year);
            }
        }
        else
        {
            if (day > 28)
            {
                printf("Không có ngày này trong tháng");
            }
            else
            {
                day += 1;
                if (day > 28)
                {
                    day = 01;
                    month += 1;
                }
                printf("Ngày hôm sau là: %2d/%2d/%4d", day, month, year);
            }
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (day > 31)
        {
            printf("Không có ngày này trong tháng");
        }
        else
        {
            day += 1;
            if (day > 31)
            {
                day = 01;
                month += 1;
            }
            printf("Ngày hôm sau là: %2d/%2d/%4d", day, month, year);
        }
        break;
    case 12:
        if (day > 31)
        {
            printf("Không có ngày này trong tháng");
        }
        else
        {
            day += 1;
            if (day > 31)
            {
                day = 01;
                month = 1;
                year += 1;
            }
            printf("Ngày hôm sau là: %2d/%2d/%4d", day, month, year);
        }
        break;
    default:
        printf("Không có tháng này");
        break;
    }
    return 0;
}