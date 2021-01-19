#include <stdio.h>
#define size 100009
int n, hewan[size], nilai, q, y, hasil[size];

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &nilai);
        hewan[i] = nilai + hewan[i - 1];
    }
    scanf("%d", &q);
    for (int i = 1; i <= q; i++)
    {
        scanf("%d", &y);
        for (int j = 1; j <= n; j++)
        {
            if (y <= hewan[j])
            {
                printf("%d\n", j);
                break;
            }
        }
    }
    return 0;
}

/*
input 
3
10
10
10
3
5
15
25

output
1
2
3

inti dari soal ini adalah
saat ditanya hewan urutan ke 5, jenis apa dia?
yaitu jenis ke 1 dengan jumlah hewannya sebanyak 10 
*/