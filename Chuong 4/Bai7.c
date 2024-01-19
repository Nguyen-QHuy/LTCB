#include <stdio.h>

int main()
{
    int time, saveType, n;
    float balance, newBalance;
    printf("Gửi không kỳ hạn-1 \nGửi có kỳ hạn-2 \nChọn phương thức gửi tiết kiệm: ");
    scanf("%d", &saveType);
    printf("Nhập số tiền cần gửi: ");
    scanf("%f", &balance);
    printf("Nhập thời hạn gửi: ");
    scanf("%d", &time);
    newBalance = balance;
    switch (saveType)
    {
    case 1:
        for (int i = 0; i < time; i++)
        {
            newBalance += newBalance * 2.4 / 100;
        }
        break;
    case 2:
        n = time / 3;
        for (int i = 0; i < n; i++)
        {
            newBalance += newBalance * 4 / 100;
        }
        break;
    default:
        printf("Lỗi cú pháp");
        break;
    }
    printf("Số tiền sau gửi tiết kiệm là: %f$", newBalance);
    return 0;
}