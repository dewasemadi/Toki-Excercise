#include <iostream>
#include <string>
#include <sstream>
#define size 10000
using namespace std;

string colon = ":";

struct rec
{
    string sebelum, sesudah;
};
typedef struct rec R;

int cekColon(string line)
{
    int cek = 0;
    string str;
    //cek aada colon apa engga
    for (int i = 0; i < line.length(); i++)
    {
        str = line[i];
        if (str.compare(colon) == 0)
            cek = 1;
    }
    return cek;
}

int main()
{
    int n, cek = 0, i = 0;
    string line, str;
    R list[size];
    cin >> n;
    getline(cin, line);
    while (n--)
    {
        getline(cin, line);

        if (cekColon(line) == 0)
            cout << "N" << endl;
        else
        {
            stringstream s(line);
            while (s.good())
            {
                getline(s, str, ':');
                list[i].sebelum = str;
                getline(s, str, '\0');
                list[i].sesudah = str;

                //cetak hasil
                if (list[i].sebelum.length() > list[i].sesudah.length())
                    cout << "L" << endl;
                else if (list[i].sebelum.length() < list[i].sesudah.length())
                    cout << "R" << endl;
                else if (list[i].sebelum.length() == list[i].sesudah.length() && list[i].sebelum.compare(list[i].sesudah) != 0)
                    cout << "D" << endl;
                else
                    cout << "S" << endl;
                i++;
            }
        }
        cek = 0;
    }
    return 0;
}