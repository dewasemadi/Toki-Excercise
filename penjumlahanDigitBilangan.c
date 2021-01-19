#include <stdio.h>

void digit()
{
    int num, remain = 0, n;
    scanf("%d", &num);
    while (num > 0)
    {
        n = num % 10;
        remain += n;
        num /= 10;
    }

    printf("%d\n", remain);
}

int main()
{
    digit();
    return 0;
}
