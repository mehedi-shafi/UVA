#include <iostream>
using namespace std;
int main ()
{
    int a, b, c, t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int loop = n;
        int total = 0;
        while (loop--){
            cin >> a >> b >> c;
            total += (a * c);
        }
        cout << total << endl;
    }
    return 0;
}
