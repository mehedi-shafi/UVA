#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++){
        int a[15], n;
        cin >> n;
        for (int i = 0; i<n; i++){
            cin >> a[i];
        }
        cout << "Case " << k << ": " << a[n/2] << endl;
    }
    return 0;
}
