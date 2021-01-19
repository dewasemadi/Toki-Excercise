#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 1000

struct rec
{
    char nim[10], nama[size], jenkel[5];
    int uts, uas;
    float average;
};
typedef struct rec R;

int main()
{
    int n, i = 0, pos = 0;
    float maks = 0;
    char line[size], *temp;
    R list[size];
    scanf("%d\n", &n);
    while (n--)
    {
        fgets(line, size, stdin);
        temp = strtok(line, ",");
        strcpy(list[i].nim, temp); //ambil nim
        temp = strtok(NULL, ",");
        strcpy(list[i].nama, temp); //ambil nama
        temp = strtok(NULL, ",");
        strcpy(list[i].jenkel, temp); //ambil jenis kelamin
        temp = strtok(NULL, ",");
        list[i].uts = atoi(temp); //ambil uts
        temp = strtok(NULL, "\0");
        list[i].uas = atoi(temp); //ambil uas

        list[i].average = (float)(list[i].uts + list[i].uas) / 2;

        if (list[i].average > maks)
            maks = list[i].average;
        if (list[i].average == maks)
            pos = i;
        i++;
    }
    printf("%s\n", list[pos].nim);
    printf("%s\n", list[pos].nama);
    printf("%s\n", list[pos].jenkel);
    printf("%.2f\n", maks);
    return 0;
}