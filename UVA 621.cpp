#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main ()
{
    int t;
    string s;
    cin >> t;
    while (t--){
        cin >> s;
        if (s.compare("1") == 0 || s.compare("4")==0 || s.compare("78")== 0)
            cout << "+" << endl;
        else if (s[s.size()-1] == '5' && s[s.size()-2] == '3')
            cout << "-" << endl;
        else if (s[0] == '9' && s[s.size()-1] == '4')
            cout << "*" << endl;
        else if(s[0] == '1' && s[1] == '9' && s[2] == '0')
            cout << "?" << endl;
        else
            cout << "+" << endl;

    }
    return 0;
}
