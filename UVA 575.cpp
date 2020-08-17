#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()
{
    string a;
    while (cin >> a){
        if (a == "0")
            break;
        long long ans = 0;
        for (int i = 0; i<a.size(); i++){
            int temp = a[a.size()-i-1] - '0';
            ans += (temp*(pow(2,(i+1))-1));
        }
        cout << ans << endl;
    }
    return 0;
}
