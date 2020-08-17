#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    long long n, ans, k = 1;
    double root;
    while (cin >> n && n){
        root = (3 + sqrt(9+(8*n)))/2;
        ans = (int) root;
        if (ans != root)
            ++ans;
        cout << "Case " << k++ << ": " << ans << endl;
    }
    return 0;
}
