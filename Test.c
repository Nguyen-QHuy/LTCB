#include <stdio.h>

void printBinary(unsigned long long int num)
{
    for (int i = 31; i >= 0; i--)
    {
        int t =(num >> i) & 1;
        printf("%llu", t);
        if (i % 4 == 0)
            printf(" ");
    }
    printf("\n");
}

int main()
{
    unsigned long int Pin = 13;
    unsigned long int Mode = 0b1111;
    __uint128_t Reg = 0xffffffff<<16;
    for (int i = 0; i < 16; i++)
    {
    printBinary(Pin & (1<<15));
    Pin <<=1;
    }
    // printBinary(Reg);
    return 0;
}