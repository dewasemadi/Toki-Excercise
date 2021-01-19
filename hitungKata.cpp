#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n, count = 0, panjang;
    string line, str;
    cin >> n;
    getline(cin, line); //pura-pura baca '\0'
    while (n--)
    {
        getline(cin, line);
        stringstream s(line);

        while (s.good())
        {
            getline(s, str, ' ');
            panjang = str.length();
            if (panjang >= 4)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}