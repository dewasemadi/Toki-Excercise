#include <stdio.h>

int main()
{
    int num, a = 200, b = 100, c = 50, d = 20, e = 10, f = 5, g = 2, h = 1;
    int a1 = 0, b1 = 0, c1 = 0, d1 = 0, e1 = 0, f1 = 0, g1 = 0, h1 = 0;
    scanf("%d", &num);
    while (num > 0)
    {
        if (num >= a)
        {
            while ((num / a) >= 0 && num >= a)
            {
                a1++;
                num = num - a;
            }
            printf("%d %d\n", a, a1);
        }
        else if (num >= b)
        {
            while ((num / b) >= 0 && num >= b)
            {
                b1++;
                num = num - b;
            }
            printf("%d %d\n", b, b1);
        }
        else if (num >= c)
        {
            while ((num / c) >= 0 && num >= c)
            {
                c1++;
                num = num - c;
            }
            printf("%d %d\n", c, c1);
        }
        else if (num >= d)
        {
            while ((num / d) >= 0 && num >= d)
            {
                d1++;
                num = num - d;
            }
            printf("%d %d\n", d, d1);
        }
        else if (num >= e)
        {
            while ((num / e) >= 0 && num >= e)
            {
                e1++;
                num = num - e;
            }
            printf("%d %d\n", e, e1);
        }
        else if (num >= f)
        {
            while ((num / f) >= 0 && num >= f)
            {
                f1++;
                num = num - f;
            }
            printf("%d %d\n", f, f1);
        }
        else if (num >= g)
        {
            while ((num / g) >= 0 && num >= g)
            {
                g1++;
                num = num - g;
            }
            printf("%d %d\n", g, g1);
        }
        else if (num >= h)
        {
            while ((num / h) >= 0 && num >= h)
            {
                h1++;
                num = num - h;
            }
            printf("%d %d\n", h, h1);
        }
    }
    return 0;
}
// pecahan
/*
1 
2
5
10
50
100
200
*/