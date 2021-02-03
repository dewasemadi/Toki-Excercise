#include <stdio.h>
#define size 100

void transpose(int num[size][size], int hasil[size][size], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // tukar baris jadi kolom
            hasil[j][i] = num[i][j];
        }
    }
}

void flipHorizontal(int num[size][size], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int gelas = num[i][j];
            num[i][j] = num[i][n - j - 1];
            num[i][n - j - 1] = gelas;
        }
    }
}

void cetak(int num[size][size], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", num[i][j]);
            // cek spasi dan newline
            if (j == n - 1)
                printf("\n");
            else
                printf(" ");
        }
    }
}

int main()
{
    int m, n, num[size][size], hasil[size][size];
    scanf("%d %d", &m, &n);
    // baca data
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    transpose(num, hasil, m, n);
    flipHorizontal(hasil, n, m);
    cetak(hasil, n, m);

    return 0;
}
