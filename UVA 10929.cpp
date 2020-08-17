#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string a;
    while (cin >> a){
        if (a == "0")
            break;
        int mod = 0;
        for (int i = 0; i<a.size(); i++){
            int temp = a[i] - '0';
            mod = (mod*10) + temp;
            mod %= 11;
        }
        if (mod == 0)
            cout << a << " is a multiple of 11." << endl;
        else
            cout << a << " is not a multiple of 11." << endl;
    }
    return 0;
}
