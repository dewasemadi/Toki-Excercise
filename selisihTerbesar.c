#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int selisihTerbesar(long long a, long long b)
{
    long hasil;
    hasil = fabs(a - b);
    return hasil;
}

int main()
{
    long long a, b, counter = 0, max = INT_MIN, hasil;
    while (true)
    {
        scanf("%lld", &a);
        if (a == -99)
        {
            break;
        }
        scanf("%lld", &b);
        hasil = selisihTerbesar(a, b);
        if (hasil > max)
        {
            max = hasil;
        }
        counter++;
    }
    printf("%lld %lld\n", counter, max);
    return 0;
}