#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 1005

struct rec
{
    char warna[size];
    int jumlah;
};
typedef struct rec R;

struct warna
{
    char warna[size];
};
typedef struct warna find;

int main()
{
    long n, i = 0, z = 0, x = 0, sum = 0;
    char line[size], warna[size], *temp, cek[] = "STOP";
    R list[size];
    find list2[size];

    scanf("%ld\n", &n);
    for (int i = 0; i < n; i++)
    {
        gets(line);
        temp = strtok(line, " ");
        strcpy(list[i].warna, temp); //ambil warna

        temp = strtok(NULL, "\0");
        list[i].jumlah = atoi(temp); //ambil jumlah warna
        sum += list[i].jumlah;
    }

    while (1)
    {
        gets(line);
        if (strcmp(line, cek) == 0)
            break;

        temp = strtok(line, "\n");
        strcpy(list2[i].warna, temp);

        z = i++;
    }

    //metode brute force
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j <= z; j++)
        {
            // case kalo ada warna sama yang ketemu
            if (strcmp(list[i].warna, list2[j].warna) == 0)
                count++;
        }
        // cetak hasil
        int sisa = abs(list[i].jumlah - count);
        if (sisa != 0)
            printf("%s %ld\n", list[i].warna, sisa);
        else
            x += list[i].jumlah; //buat ngecek aja
    }

    if (x == sum)
        printf("LENGKAP\n");
    return 0;
}