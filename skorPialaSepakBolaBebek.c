#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long n, m, k, s, skor, max = INT_MIN, cpk, counter = 0;
    long totalMain = 0;
    long totalMenang = 0, totalKalah = 0, totalSeri = 0;
    bool cek = false;
    scanf("%ld", &n);
    for (long i = 1; i <= n; i++)
    {
        scanf("%ld %ld %ld", &m, &k, &s);
        totalMenang += m;
        totalKalah += k;
        totalMain = m + k + s;
        if (totalMain != n - 1)
        {
            cek = true;
        }
        if (m * 3 + s == max)
        {
            counter = max;
        }
        if (m * 3 + s > max)
        {
            counter = i;
            max = m * 3 + s;
        }
    }
    // cetak nilai
    if (cek || counter == max || totalMenang != totalKalah)
    {
        printf("-1\n");
    }
    else
    {
        printf("%ld %ld\n", counter, max);
    }
    return 0;
}
/*
ini soal triky
kalo ada 4 tim berarti dia main 3 kali

total menang = total kalah
total seri = harus kelipatan 2 karena yang main ada 2 tim
*/