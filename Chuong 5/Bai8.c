#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    printf("nhập n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}