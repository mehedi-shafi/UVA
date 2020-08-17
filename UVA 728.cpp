#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x, y, t;
    char c;
    cin >> t;
    while (t--){
        cin >> c >> x >> y;
        if (c == 'r' || c == 'Q')
            cout << min(x,y) << endl;
        else if (c == 'k')
            cout << ((((x + 1)/2)) * ((y + 1) / 2) + ((x/2)*(y/2))) << endl;
        else if (c == 'K')
            cout << (((x+1)/2) * (y+1)/2) << endl;
    }
    return 0;
}
