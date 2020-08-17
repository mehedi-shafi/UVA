#include <iostream>
#include <string>
using namespace std;
int main()
{
    int charmap[91] = {0};
    charmap['A'] = 'A';
    charmap['E'] = '3';
    charmap['H'] = 'H';
    charmap['I'] = 'I';
    charmap['J'] = 'L';
    charmap['L'] = 'J';
    charmap['M'] = 'M';
    charmap['O'] = 'O';
    charmap['S'] = '2';
    charmap['T'] = 'T';
    charmap['U'] = 'U';
    charmap['V'] = 'V';
    charmap['W'] = 'W';
    charmap['X'] = 'X';
    charmap['Y'] = 'Y';
    charmap['Z'] = 'Z';
    charmap['1'] = '1';
    charmap['2'] = 'S';
    charmap['3'] = 'E';
    charmap['5'] = 'Z';
    charmap['8'] = '8';

    string a;
    while (cin >> a){
        bool palindrom = true, mirror = true;
        for (int i = 0; i <= a.size()/2; i++){
            if (a[i] != a[a.size()-i-1]) palindrom = false;
            if (a[i] != charmap[a[a.size()-1-i]]) mirror = false;
        }
        if (!palindrom && !mirror)
            cout << a << " -- is not a palindrome." << endl;
        else if (palindrom && !mirror)
            cout << a << " -- is a regular palindrome." << endl;
        else if (!palindrom && mirror)
            cout << a << " -- is a mirrored string." << endl;
        else
            cout << a << " -- is a mirrored palindrome." << endl;
        cout << endl;
    }
    return 0;
}
