#include <stdio.h>
#include <math.h>

int main()
{
    float a, x, ans;
    printf("Chương trình tính logarit cơ số a \n");
    printf("Nhập cơ số a > 0, a != 1 \na = ");
    scanf("%f", &a);
    printf("Nhập giá trị x > 0 \nx = ");
    scanf("%f", &x);
    ans = log(x) / log(a);
    printf("Kết quả log(a)x = lnx/lna = %.2f", ans);
    return 0;
}