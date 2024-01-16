#include <stdio.h>

int main()
{
    int n, prev1, prev2;
    printf("Nhập n=");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == 2)
        {
            printf("%d ", i);
            prev1 = 1;
            prev2 = 2;
        }
        else
        {
            prev2 += prev1;
            prev1 = prev2 - prev1;
            printf("%d ", prev2);
        }
    }

    return 0;
}
