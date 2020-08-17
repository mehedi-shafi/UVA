#include <bits/stdc++.h>
using namespace std;
double p, q, r, s, t, u;
double f (double x)
{
    return (p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u);
}

double bisection()
{
    double low = 0, high = 1;
    while (low+1e-7 < high){
        double mid = (high + low) / 2;
        if (f(low) * f(mid) <= 0)
            high = mid;
        else
            low = mid;
    }
    return (high+low) / 2;
}
int main ()
{
    while (cin >> p >> q >> r >> s >> t >> u){
        if (f(0) * f(1) > 0)
            cout << "No solution" << endl;
        else
            cout << setprecision(4) << fixed << bisection() << endl;
    }
    return 0;
}
