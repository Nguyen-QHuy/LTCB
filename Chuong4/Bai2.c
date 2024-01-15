#include <stdio.h>
#include <math.h>

int main()
{
    int  a, b, c;
    float CV, p, S;
    printf("Chương trình tính chu vi, diện tích hình tam giác\n");
    printf("Nhập chiều dài cạnh thứ nhất: ");
    scanf("%d", &a);
    printf("Nhập chiều dài cạnh thứ hai: ");
    scanf("%d", &b);
    printf("Nhập chiều dài cạnh thứ ba: ");
    scanf("%d", &c);

    if ((a + b > c) & (b + c > a) & (a + c > b))
    {
        CV = a + b + c;
        p = CV / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Chu vi = %.2f \nDiện tích = %.2f", CV, S);
    }
    else
    {
        printf("Không tạo thành tam giác");
    }

    return 0;
}