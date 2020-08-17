#include <iostream>
using namespace std;
int main ()
{
    int h1, h2, h, m1, m2, m;
    while (true){
        m = 0;
        h = 0;
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1==0 && m1 == 0 && h2 == 0 && m2 == 0) break;
        if (h2 > h1) h = h2-h1;
        else if (h2 == h1 && m1> m2) h = 24;
        else if (h2== h1) h = 0;
        else h = (24-h1) + h2;
        if (m2>m1) m = m2-m1;
        else if (m2==m1) m = 0;
        else {
            m = (60-m1) + m2;
            --h;
        }
        m += h*60;
        cout << m << endl;
    }
    return 0;
}

