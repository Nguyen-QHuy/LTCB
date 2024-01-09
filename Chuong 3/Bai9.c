#include <stdio.h>

int main()
{
    unsigned int day, month, year, y1, y2;
    printf("Chương trình in ngày tháng năm\n");
    printf("Nhập ngày: ");
    scanf("%2d", &day);
    printf("Nhập tháng: ");
    scanf("%2d", &month);
    printf("Nhập năm: ");
    scanf("%4d", &year);
    y1 = year % 10;
    y2 = year % 100 - y1;
    printf("dd//mm//yy: %d/%d/%d%d", day, month, y2, y1);
    return 0;
}