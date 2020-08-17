#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--){
        int n, a[10] = {0};
        cin >> n;
        for (int i = 1; i <= n; i++){
            int temp = i;
            while (temp > 0){
                ++a[temp%10];
                temp /= 10;
            }
        }
        cout << a[0];
        for (int i = 1; i<10; i++)
            cout << " " << a[i];
        cout << endl;
    }
    return 0;
}
