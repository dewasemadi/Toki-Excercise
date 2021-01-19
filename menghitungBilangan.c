#include <stdio.h>
#define SIZE 10000

int main()
{
    int num[SIZE], first, i, kecil = 0, besar = 0;
    for (i = 0; num[i] != -99; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] == -99)
        {
            break;
        }
        first = num[0];
        if (num[i] <= first)
        {
            kecil++;
        }
        else
        {
            besar++;
        }
    }
    printf("%d %d\n", kecil, besar);
    return 0;
}