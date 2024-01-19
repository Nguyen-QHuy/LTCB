#include <stdio.h>

int main()
{
    int i = 0;
    float a, avr = 0, sum = 0;
    printf("Nhập dãy số:\n");
    while (1)
    {
        scanf("%f", &a);
        if(a==-1)   break;
        sum += a;
        i++;
    }
    avr = sum / i;
    printf("Giá trị trung bình của dãy là: %f", avr);
    return 0;
}