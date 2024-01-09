#include <stdio.h>

#define pi 3.14159

int main()
{
    float r, CV, S;
    printf("Chương trình tính chu vi và diện tích hình tròn \n");
    printf("Nhập bán kính r=");
    scanf("%f", &r);
    CV = 2 * pi * r;
    S = pi * r * r;
    printf("\nChu vi = %.2f \nDiện tích = %.2f", CV, S);
    return 0;
}