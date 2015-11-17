#include <iostream>
using namespace std;
int main ()
{
    int t, x, y, z;
    cin >> t;
    while (t--){
        cin >> x >> y >> z;
        if ((x+y)>z && (x+z)>y && (y+z)>x)
            cout << "OK";
        else
            cout << "Wrong!!";
        cout << endl;
    }
    return 0;
}
