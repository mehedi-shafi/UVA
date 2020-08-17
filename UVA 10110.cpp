#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    long long n, q;
    while (cin >> n){
        if (n == 0)
            break;
        q = sqrt (n);
        if (n == (q*q))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
