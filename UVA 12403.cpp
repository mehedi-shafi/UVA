#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int t, account = 0;
    cin >> t;
    while (t--){
        int a;
        string s;
        cin >> s;
        if (s.compare("report")==0)
            cout << account << endl;
        else{
            cin >> a;
            account+=a;
        }
    }
    return 0;
}
