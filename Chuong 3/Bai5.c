#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, k, d;
    printf("Chương trình tính hệ số góc của đường thẳng qua hai điểm và khoảng cách giữa hai điểm \n");

    printf("Nhập tọa độ  điểm thứ nhất: \nx1 = ");
    scanf("%f", &x1);
    printf("y1 = ");
    scanf("%f", &y1);

    printf("Nhập tọa độ  điểm thứ hai: \nx2 = ");
    scanf("%f", &x2);
    printf("y2 = ");
    scanf("%f", &y2);

    k = (y2 - y1) / (x2 - x1);
    d = sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));

    printf("Hệ số góc của đường thẳng qua hai điểm k = %.2f", k);
    printf("\nKhoảng cách giữa hai điểm d = %.2f", d);
    return 0;
}