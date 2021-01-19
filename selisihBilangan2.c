#include <stdio.h>
#include <limits.h>
#include <math.h>

void selisihBilangan()
{
    int max = INT_MIN;
    int n;
    long num[100000], selisih[100000], selisihTerbesar[100000];

    scanf("%d", &n);
    // baca array
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &num[i]);
    }

    //cari selisih pake array
    for (int k = 0; k < n; k++)
    {
        for (int j = k + 1; j < n; j++)
        {
            if (num[k] > num[k + 1])
            {
                // simpan semua selisih
                selisih[k] = num[k] - num[k + 1];
            }
            else
            {
                selisih[k] = num[k + 1] - num[k];
            }

            selisihTerbesar[k] = selisih[k];
        }
    }

    // cari selisih terbesar
    for (int a = 0; a < n; a++)
    {
        // bandingkan selisih dengan nilai paling besar untuk cari selisih terbesar
        if (selisihTerbesar[a] > max)
        {
            max = selisihTerbesar[a];
        }
    }

    printf("%ld\n", max);
}

int main()
{
    selisihBilangan();
    return 0;
}
