#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    float x;
    printf("Chương trình giải pt ax+b=0 \n");
    printf("Nhập a =  ");
    scanf("%d", &a);
    printf("Nhập b =  ");
    scanf("%d", &b);
    x = (float)-b/a;
    printf("Nghiệm x = %.2f", x);
    return 0;
}