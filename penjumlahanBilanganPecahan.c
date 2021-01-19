#include <stdio.h>
#define size 100

// algoritma euclid
int fpb(int a, int b)
{
    if (b == 0)
        return a;
    else
        return fpb(b, a % b);
}

int main()
{
    int a[size], b[size], pembilang[size], penyebut[size], i = 0;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (int i = 0; i < 1; i++)
    {
        pembilang[i] = a[i] * b[i + 1] + a[i + 1] * b[i];
        penyebut[i] = b[i] * b[i + 1];
    }

    int hasil = fpb(pembilang[i], penyebut[i]);
    // sederhanakan nilainya
    if (hasil != pembilang[i])
    {
        pembilang[i] = pembilang[i] / hasil;
        penyebut[i] = penyebut[i] / hasil;
    }
    printf("%d %d\n", pembilang[i], penyebut[i]);
    return 0;
}