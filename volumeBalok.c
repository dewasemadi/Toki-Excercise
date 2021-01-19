#include <stdio.h>
#define size 10005

struct balok
{
    double volume;
};
typedef struct balok R;

int main()
{
    long n, ask, count = 0;
    double average = 0, p, l, t, sum = 0;
    R list[size];
    scanf("%ld", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &p, &l, &t);
        list[i].volume = p * l * t;
    }

    scanf("%ld", &ask);
    while (ask != -9)
    {
        sum += list[ask - 1].volume;
        count++;
        scanf("%ld", &ask);
    }
    average = (double)sum / count;
    printf("%.4lf\n", average);
    return 0;
}