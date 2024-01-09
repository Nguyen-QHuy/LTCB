#include <stdio.h>

int main()
{
    unsigned int R1, R2, R3;
    printf("Chương trình tính tổng trở song song\n");
    printf("Nhập điện trở R1 = ");
    scanf("%d", &R1);
    printf("Nhập điện trở R2 = ");
    scanf("%d", &R2);
    printf("Nhập điện trở R3 = ");
    scanf("%d", &R3);
    float R = 1 / (1 / (float)R1 + 1 / (float)R2 + 1 / (float)R3);
    printf("Tổng trở R = %.2f", R);
    return 0;
}