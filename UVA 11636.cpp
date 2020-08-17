#include <iostream>
using namespace std;
int main ()
{
    int n, k = 1;
    while (cin >> n && n > 0){
        int lines = 1, paste = 0;
        while (lines * 2 <= n){
            lines *= 2;
            ++ paste;
        }
        if (lines < n)
            ++paste;
        cout << "Case " << k++ << ": " << paste << endl;
    }
    return 0;
}
