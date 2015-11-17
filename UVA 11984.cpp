#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int t, i;
    double f, c, c_f, total;
    cin >> t;
    for (i=1; i<=t; ++i){
        cin >> c >> f;
        c_f = f + (9*c)/5 + 32;
        total = ((c_f-32)*5)/9;
        cout << setprecision(2) << fixed;
        cout << "Case " << i << ": " << total <<endl;
    }
    return 0;
}
