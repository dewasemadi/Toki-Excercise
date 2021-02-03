#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// algoritma euclid
int fpb(int a, int b)
{
    if (b == 0)
        return a;
    else
        return fabs(fpb(b, a % b));
}

int main()
{
    int a, b, c, x = 0, y = 0;
    while (true)
    {
        scanf("%d", &a);
        if (a == -99)
            break;
        scanf("%d %d", &b, &c);
        if (a < 0 || b < 0 || c < 0)
        {
            y++;
            continue;
        }
        if (fpb(a, b) == c)
            x++;
        y++;
    }

    printf("%d %d\n", y, x);
    return 0;
}
