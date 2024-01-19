#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a, b, c;
    printf("Chương trình tìm số lớn nhất\n");
    printf("Nhập a= ");
    scanf("%d", &a);
    printf("Nhập b= ");
    scanf("%d", &b);
    printf("Nhập c= ");
    scanf("%d", &c);
    printf("Số lớn nhất trong ba số là: %d ", max(a, max(b,c)));
    return 0;
}