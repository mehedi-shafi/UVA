#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
    double pi = acos(-1);
    int t;
    cin >> t;
    while (t--){
        int l;
        double total_area, red, green;
        cin >> l;
        double w = (double) (6 * l)  / 10;
        total_area = l*w;
        double r = (double) l / 5;
        red = pi * r * r;
        green = total_area - red;
        cout << setprecision(2) << fixed << red << " " << green << endl;
    }
    return 0;
}
