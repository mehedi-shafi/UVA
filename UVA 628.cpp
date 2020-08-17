#include <bits/stdc++.h>
using namespace std;
int m,n, len, curr;
string dic[110];
string s;
char print[300];
void pass(int n)
{
    if (n == len){
        for (int i = 0; i < len; i++){
            if (print[i] == '#')
                cout << dic[curr];
            else
                cout << print[i];
        }
        cout << endl;
    }
    else if (s[n] == '#'){
        print[n] = '#';
        pass(n+1);
    }
    else{
        for (int i = 0; i <= 9; i++){
            print[n] = i+'0';
            pass(n+1);
        }
    }
}
int main ()
{
    int n;
    while (cin >> n){
            cout << "--" << endl;
        for (int i = 0; i < n; i++)
            cin >> dic[i];
        cin >> m;
        for (int i = 0; i < m; i++){
            cin >> s;
            len = s.size();
            for (int j = 0; j < n; j++){
                curr = j;
                pass(0);
            }
        }
    }
    return 0;
}
