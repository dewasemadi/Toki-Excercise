#include <stdio.h>
#define size 100

int main()
{
    long a, b, c, n = 0;
    scanf("%ld %ld", &a, &b);
    while (b > 0)
    {
        c = b % 10;
        if (c == a)
        {
            n++;
        }
        b /= 10;
    }
    if (n == 0)
    {
        printf("tidak ada\n");
    }
    else
    {
        printf("%ld\n", n);
    }
}
