#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <string.h>
using namespace std;
int main ()
{
    int k = 0, mx = 0;
    char s[101][101], ans[101];
    for (int i = 0; i<101; i++){
        for (int j = 0; j<101; j++){
            s[i][j] = ' ';
        }
    }
    while (gets(s[k])){
        if (s[k][0]=='0')
            break;
        if (strlen(s[k]) > mx)
            mx = strlen(s[k]);
        s[k][strlen(s[k])] = ' ';
        ++k;
    }
    int c = 0;
    for (int i = mx-1; i>=0; i--){
        int add = c;
        for (int j = 0; j<k; j++){
            if (s[j][i] != 32)
                add += (s[j][i] - '0');
        }
        if (add<=9){
            c = 0;
            ans[i] = '0' + add;
        }
        else if (add>9){
            ans[i] = '0' + add%10;
            c = add/10;
        }
    }
    if (c == 0)
        cout << ans << endl;
    else
        cout << c << ans << endl;
    return 0;
}
