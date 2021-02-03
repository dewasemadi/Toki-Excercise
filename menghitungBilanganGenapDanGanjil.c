#include <stdio.h>

int main()
{
    int n, num, x = 0, y = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
            x++;
        else
            y++;
    }
    printf("%d %d\n", x, y);
    return 0;
}
