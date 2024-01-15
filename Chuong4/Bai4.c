#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float delta, x1, x2;
    printf("Chương trình giải pt ax^2+bc+c=0 \n");
    printf("Nhập a =  ");
    scanf("%d", &a);
    printf("Nhập b =  ");
    scanf("%d", &b);
    printf("Nhập c =  ");
    scanf("%d", &c);
    delta = (float)(b * b) - (4 * a * c);
    if (delta < 0)
    {
        printf("Phương trình vô nghiệm");
    }
    else if (delta > 0)
    {
        x1 = (float)(-b + sqrt(delta)) / (2 * a);
        x2 = (float)(-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f \nx2 = %.2f", x1, x2);
    }
    else
    {
        x1 = (float)-b / (2 * a);
        printf("x1 = x2 = %.2f", x1);
    }

    return 0;
}