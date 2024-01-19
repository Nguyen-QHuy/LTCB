#include <stdio.h>

int main()
{
    int oldIndex, newIndex, value, bill1, bill2 = 0;
    printf("Nhập chỉ số điện cũ: ");
    scanf("%d", &oldIndex);
    printf("Nhập chỉ số điện mới: ");
    scanf("%d", &newIndex);
    value = newIndex - oldIndex;
    if (value <= 50)
    {
        bill1 = value * 450;
    }
    else
    {
        bill1 = 50 * 450;
        if (value <= 100)
        {
            bill2 = (value - 50) * 700;
        }
        else if (value <= 150)
        {
            bill2 = (value - 50) * 910;
        }
        else
        {
            bill2 = (value - 50) * 1200;
        }
    }
    printf("Số tiền trả trong định mức: %d \nSố tiền trả vượt định mức: %d \nTổng số tiền phải trả: %d", bill1, bill2, bill1 + bill2);
    return 0;
}