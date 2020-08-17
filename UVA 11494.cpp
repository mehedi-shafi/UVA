#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x1, x2, x, y1, y2, y;
    while (true){
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) break;
        x = fabs (x2 - x1);
        y = fabs (y2 - y1);
        if (x1==x2 && y1==y2) cout << 0 << endl;
        else if (x == y) cout << 1 << endl;
        else if (x1==x2 || y1 == y2) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}

