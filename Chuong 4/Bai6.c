#include <stdio.h>

int main()
{
    int month, year;
    printf("Nhập tháng: ");
    scanf("%2d", &month);
    printf("Nhập năm: ");
    scanf("%4d", &year);

    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Số ngày trong tháng là 30 ngày");
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Số ngày trong tháng là 31 ngày");
        break;
    case 2:
        /*
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            printf("Số ngày trong tháng là 29 ngày");
        }
        else
        {
            printf("Số ngày trong tháng là 28 ngày");
        }
        */
        (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? printf("Số ngày trong tháng là 29 ngày") : printf("Số ngày trong tháng là 28 ngày");
        break;
    default:
        printf("Không có tháng này");
        break;
    }
    return 0;
}