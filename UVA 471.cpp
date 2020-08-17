#include <iostream>
using namespace std;
int main ()
{
    int t, a, b, i, j, n;
    cin >> t;
    while (t--){
        cin >> n;
        i = 1;
        for (j=n; i<=n; j++){
            if (j/i == n) {
                cout << j << " / " << i << " = " << n << "\n";
                i++;
            }
        }
    }
    return 0;
}
