#include <stdio.h>

int main()
{
    int n, i = 0, a, max = 0, index = 0;
    printf("Nhập n=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (max < a)
        {
            max = a;
            index = i;
        }
    }
    printf("Số lớn nhất là %d ở vị trí thứ %d", max, index);

    return 0;
}