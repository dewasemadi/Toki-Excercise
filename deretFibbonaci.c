#include <stdio.h>

int n, hasil;

int fibbonaci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibbonaci(n - 1) + fibbonaci(n - 2);
}

int main()
{
    scanf("%d", &n);
    hasil = fibbonaci(n);
    printf("%d\n", hasil);
    return 0;
}