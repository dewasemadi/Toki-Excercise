#include <stdio.h>

int main()
{
    int m, n, num = -1;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num < 10)
            {
                num++;
                if (num == 10)
                {
                    num = 0;
                }
            }
            printf("%d", num);
            // cek spasi
            if (j < n - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}