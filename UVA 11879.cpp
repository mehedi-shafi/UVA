#include <iostream>
#include <string>

using namespace std;
int main ()
{
    string n;
    while (cin >> n){
        if (n[0] == '0')
            break;
        int mod = 0;
        for (int i = 0; i < n.size(); i++){
            mod = ((mod*10)+(n[i]-'0')) % 17;
        }
        if (mod == 0)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
