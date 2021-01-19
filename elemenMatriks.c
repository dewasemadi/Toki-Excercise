#include <stdio.h>
#define size 300

int main()
{
    int m, n, x, y;
    float num[size][size];
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%f", &num[i][j]);
        }
    }
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        scanf("%d", &y);
        if (y % n == 0)
        {
            printf("%.2f\n", num[y / n][n]);
        }
        else
        {
            printf("%.2f\n", num[y / n + 1][y % n]);
        }
    }
    return 0;
}