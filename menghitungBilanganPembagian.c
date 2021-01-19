#include <stdio.h>

long a, b, counter = 0, n = 0;
double c, hasil;

int pembagian(long a, long b)
{
    if (b != 0)
    {
        hasil = a / b;
    }
    return hasil;
}

int main()
{
    while (1)
    {
        scanf("%ld", &a);
        if (a == -99)
        {
            break;
        }
        scanf("%ld %lf", &b, &c);
        hasil = pembagian(a, b);
        if (hasil == c)
        {
            n++;
        }
        counter++;
    }
    printf("%ld %ld\n", counter, n);
    return 0;
}