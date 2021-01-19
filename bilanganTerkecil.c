#include <stdio.h>
#include <limits.h>

int bilanganTerkecil()
{
    int min = INT_MAX;
    int num;

    // baca inputan
    scanf("%d", &num);
    while (1)
    {
        // cek kalo input cuma -99, langsung empty
        if (num == -99)
        {
            puts("empty");
            break;
        }
        // kalo gak -99, cari nilai terkecil
        while (num != -99)
        {
            if (num < min)
            {
                min = num;
            }
            scanf("%d", &num);
        }
        printf("%d\n", min);
        break;
    }

    return 0;
}

int main()
{
    bilanganTerkecil();
    return 0;
}
