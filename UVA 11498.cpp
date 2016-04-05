#include <iostream>
using namespace std;
int main ()
{
    int t;
    while (cin >> t){
        if (t==0)
            break;
        int x , y;
        cin >> x >> y;
        while (t--){
            int a, b;
            cin >> a >> b;
            if (a==x || b == y)
                    cout << "divisa" << endl;
            else{
                if (a<x && b>y)
                    cout << "NO" << endl;
                else if (a>x && b>y)
                    cout << "NE" << endl;
                else if (a>x && b<y)
                    cout << "SE" << endl;
                else if (a<x && b <y)
                    cout << "SO" << endl;
            }
        }
    }
    return 0;
}
