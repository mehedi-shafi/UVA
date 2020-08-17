#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    getchar();
    while (t--){
        string str;
        int m = 0, f = 0;
        getline (cin, str);
        for (int i = 0; i<str.size(); i++){
            if (str[i] == 'M')
                ++m;
            else if (str[i] == 'F')
                ++f;
        }
        if (m == 1 && f == 1)
            cout << "NO LOOP" << endl;
        else if (m == f)
            cout << "LOOP" << endl;
        else
            cout << "NO LOOP" << endl;
    }
    return 0;
}
