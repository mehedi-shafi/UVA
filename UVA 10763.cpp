#include <iostream>
using namespace std;

int main ()
{
    int n;
    while (cin >> n && n){
        if (n%2 != 0){
            cout << "NO" << endl;
            continue;
        }
        int go[500001] = {0}, come[500001] = {0}, a, b;
        while (n--){
            cin >> a >> b;
            ++go[a];
            ++come[b];
        }
        bool yes = true;
        for (int i = 0; i < 1000001; i++){
            if (arr[i] != 0){
                yes = false;
                break;
            }
        }
        if (yes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
