#include <iostream>
using namespace std;

long long ncr (long long m, long long n)
{
    long long res = 1;
    int p = m-n + 1;
    for (int i = 1; i<= n; i++){
        res *= p;
        res /= i;
        ++p;
    }
    return res;
}

int main ()
{
    long long m, n;
    while (cin >> m >> n){
        if (m == 0 && n == 0)
            break;
        cout << m << " things taken " << n << " at a time is " << ncr(m, n) << " exactly." << endl;
    }
    return 0;
}
