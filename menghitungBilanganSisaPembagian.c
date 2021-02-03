#include <stdio.h>

int modulo(long long a, long long b)
{
    long long hasil;
    if (a > 0 && b > 0)
        hasil = a % b;
    return hasil;
}

int main()
{
    long long n, a, b, c, counter = 0;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        if (modulo(a, b) == c)
            counter++;
    }
    printf("%lld\n", counter);
    return 0;
}
