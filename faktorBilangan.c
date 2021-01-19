#include <stdio.h>

int faktorBilangan()
{
    long num, z = 0;
    scanf("%ld", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            z += 1;
        }
    }

    printf("%ld\n", z);
}

int main()
{
    faktorBilangan();
    return 0;
}