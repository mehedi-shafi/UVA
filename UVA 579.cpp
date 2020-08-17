#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main ()
{
    double h, m, dis;
    while (scanf("%lf:%lf", &h, &m)){
        if (h == 0 && m == 0)
            break;
        h *= 5;
        (m == 0) ? m = 60 : h += (m/12);
        dis = (m > h) ? (m-h) : (h-m);
        double degree1 = dis * 6;
        double degree2 = (360-degree1);
        double degree = (degree1 < degree2) ? degree1 : degree2;
        cout << setprecision(3) << fixed << degree << endl;
    }
    return 0;
}
