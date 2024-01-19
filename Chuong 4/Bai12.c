#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Nhập ngày: ");
    scanf("%d", &day);
    printf("Nhập tháng:");
    scanf("%d", &month);
    printf("Nhập năm:");
    scanf("%d", &year);

    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        (day > 30) ? printf("Không có ngày này trong tháng") : printf("Ngày hợp lệ");
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            day > 29 ? printf("Không có ngày này trong tháng") : printf("Ngày hợp lệ");
        }
        else
        {
            (day > 28) ? printf("Không có ngày này trong tháng") : printf("Ngày hợp lệ");
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Ngày hợp lệ");
        break;
    default:
        printf("Không có tháng này");
        break;
    }
    return 0;
}