#include<iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <cstdio>
using namespace std;
int main ()
{
    int c, i = 0, mx;
    char s[101][101];
    for (i = 0; i<101; i++){
        for (int j = 0; j<101; j++){
            s[i][j] = ' ';
        }
    }
    i = 0;
    while (gets(s[i]))
        ++i;
    c = i;
    mx = strlen(s[0]);
    for (i = 0; i<c; i++){
        if (strlen(s[i])>mx)
            mx = strlen(s[i]);
        s[i][strlen(s[i])] = ' ';
    }
    for (i = 0; i<mx; i++){
        for (int j = c-1; j>=0; j--){
            cout << s[j][i];
        }
        cout << endl;
    }
    return 0;
}
