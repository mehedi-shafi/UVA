#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main ()
{
    int c[300] = {0};
    c['1'] = '`';
    c['2'] = '1';
    c['W'] = 'Q';
    c['S'] = 'A';
    c['X'] = 'Z';
    c['3'] = '2';
    c['E'] = 'W';
    c['D'] = 'S';
    c['C'] = 'X';
    c['4'] = '3';
    c['R'] = 'E';
    c['F'] = 'D';
    c['V'] = 'C';
    c['5'] = '4';
    c['T'] = 'R';
    c['G'] = 'F';
    c['B'] = 'V';
    c['6'] = '5';
    c['Y'] = 'T';
    c['H'] = 'G';
    c['N'] = 'B';
    c['7'] = '6';
    c['U'] = 'Y';
    c['J'] = 'H';
    c['M'] = 'N';
    c['8'] = '7';
    c['I'] = 'U';
    c['K'] = 'J';
    c[','] = 'M';
    c['9'] = '8';
    c['O'] = 'I';
    c['L'] = 'K';
    c['.'] = ',';
    c['0'] = '9';
    c['P'] = 'O';
    c[';'] = 'L';
    c['/'] = '.';
    c['-'] = '0';
    c['['] = 'P';
    c[39] = ';';
    c['='] = '-';
    c[']'] = '[';
    c[92] = ']';
    string a;
    while (getline(cin , a)){
        for (int i = 0; i < a.size(); i++){
            if (c[a[i]] != 0)
                printf ("%c", c[a[i]]);
            else
                printf ("%c", a[i]);
        }
        cout << endl;
    }
    return 0;
}
