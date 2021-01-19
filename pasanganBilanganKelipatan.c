#include <stdio.h>

void kelipatan()
{
    long n, a[1000], b[1000], hasil = 0;

    // baca array
    scanf("%ld", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%ld %ld", &a[i], &b[i]);
    }

    // cari kelipatan
    for (int j = 0; j < n; j++)
    {
        if (a[j] % b[j] == 0 || b[j] % a[j] == 0)
        {
            hasil += 1;
        }
    }
    printf("%ld\n", hasil);
}

int main()
{
    kelipatan();
    return 0;
}