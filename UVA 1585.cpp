#include <iostream>
using namespace std;
int main ()
{
    long long t;
    cin >> t;
    string s;
    while (t--){
        cin >> s;
        int c = 0, k = 1;
        for (int i = 0; i<s.size(); i++){
            if (s[i] == 'O'){
                c += k;
                ++k;
            }
            else if (s[i] == 'X')
                k = 1;
        }
        cout << c << endl;
    }
    return 0;
}
