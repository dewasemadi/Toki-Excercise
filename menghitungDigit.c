#include <stdio.h>

int main()
{
    long num, i = 0;
    scanf("%ld", &num);
    while (num > 0)
    {
        num = (num - (num % 10)) / 10;
        i++;
    }
    printf("%ld\n", i);
    return 0;
}