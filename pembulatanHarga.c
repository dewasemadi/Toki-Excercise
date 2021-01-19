#include <stdio.h>
#include <math.h>
int main()
{
    long a, b;
    long x, y;
    scanf("%ld %ld", &a, &b);
    x = a;
    y = a;
    while ((x % b) != 0)
    {
        x++;
    }
    while ((y % b) != 0)
    {
        y--;
    }
    if (fabs(x - a) >= fabs(y - a))
    {
        printf("%ld\n", y);
    }
    else
        printf("%ld\n", x);

    return 0;
}