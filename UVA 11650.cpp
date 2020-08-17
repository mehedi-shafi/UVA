#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--){
        int h, m, ha, ma;
        scanf ("%d:%d", &h, &m);
        if (h == 12)
            h = 0;
        ha = 12 - h - 1;
        ma = 60 - m;
        if (ma == 60){
            ++ha;
            ma = 0;
        }
        if (ha == 0)
            ha = 12;
        if (ha < 10)
            cout << "0" << ha;
        else cout << ha;
        cout << ":";
        if (ma < 10)
            cout << "0" << ma;
        else
            cout << ma;
        cout << endl;
    }
    return 0;
}
