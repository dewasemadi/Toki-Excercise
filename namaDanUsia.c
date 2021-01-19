#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 1000

char *substring(char *destination, const char *source, int beg, int n)
{
    strncpy(destination, (source + beg), n);
    return destination;
}

struct rec
{
    int usia;
    char nama[40];
};
typedef struct rec R;

int main()
{
    int n, sum = 0, length = 0;
    char line[40] = {'0'}, temp[40];
    float average = 0;
    R list[size];
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        gets(line);
        length = strlen(line);

        substring(temp, line, 0, 2);
        list[i].usia = atoi(temp); //ambil usia

        substring(temp, line, 2, length);
        strcpy(list[i].nama, temp); //ambil nama

        printf("%s\n", list[i].nama);
        sum += list[i].usia;
    }
    average = (float)sum / n;
    printf("%.2f\n", average);
    return 0;
}