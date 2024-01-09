#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, CV, S;
    printf("Chương trình tính chu vi và diện tích tam giác \n");
    printf("Nhập độ dài 3 cạnh tam giác: ");
    scanf("%f %f %f", &a, &b, &c);
    CV = a + b + c;
    float p = CV / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Chu vi = %.2f \nDiện tích = %.2f", CV, S);
    return 0;
}