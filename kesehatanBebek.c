#include <stdio.h>
#include <limits.h>

int main()
{
    int num, max = INT_MIN, min = INT_MAX, n = 0;
    scanf("%d", &num);
    while (num != -1)
    {
        // cek dia nilai 0 apa kaga
        while (num != 0)
        {
            if (num >= max)
                max = num;
            if (num <= min)
                min = num;
            scanf("%d", &num);
            if (num == -1)
                break;
        }
        printf("%d %d\n", min, max);
        // kembaliin nilai min dan max ke semula
        max = INT_MIN;
        min = INT_MAX;
        if (num == -1)
            break;
        scanf("%d", &num);
    }
    return 0;
}
