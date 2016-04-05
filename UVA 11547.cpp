#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--){
        int a;
        cin >> a;
        int ans = (((((a*567)/9)+7492)*235)/47) - 498;
        ans/=10;
        int out = ans%10;
        cout << abs(out) << endl;
    }
    return 0;
}
