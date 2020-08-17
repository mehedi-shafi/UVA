#include <iostream>
#include <string>
#include <cstdio>
#include <ctype.h>
using namespace std;
int main ()
{
    int charmap[200] = {0};
    charmap['e'] = 'q';
    charmap['d'] = 'a';
    charmap['c'] = 'z';
    charmap['r'] = 'w';
    charmap['f'] = 's';
    charmap['v'] = 'x';
    charmap['t'] = 'e';
    charmap['g'] = 'd';
    charmap['b'] = 'c';
    charmap['y'] = 'r';
    charmap['h'] = 'f';
    charmap['n'] = 'v';
    charmap['u'] = 't';
    charmap['j'] = 'g';
    charmap['m'] = 'b';
    charmap['i'] = 'y';
    charmap['k'] = 'h';
    charmap[','] = 'n';
    charmap['o'] = 'u';
    charmap['l'] = 'j';
    charmap['.'] = 'm';
    charmap['p'] = 'i';
    charmap[59] = 'k';
    charmap['['] = 'o';
    charmap[39] = 'l';
    charmap[']'] = 'p';
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 32)
            cout << " ";
        else if (charmap[tolower(s[i])] != 0)
            printf ("%c", charmap[tolower(s[i])]);
    }
    cout << endl;
    return 0;
}
