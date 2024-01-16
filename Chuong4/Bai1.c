#include <stdio.h>

int main()
{
    int num1, num2, num3, max;
    printf("Chương trình tìm số lớn nhất\n");
    printf("Nhập số thứ nhất: ");
    scanf("%d", &num1);
    printf("Nhập số thứ hai: ");
    scanf("%d", &num2);
    printf("Nhập số thứ ba: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        max = num1;
    }
    else if (num2 > num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }

    printf("Số lớn nhất trong ba số là: %d ", max);
    return 0;
}