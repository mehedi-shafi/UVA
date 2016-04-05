#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int ans = (n/3) * (m/3);
        cout << ans << endl;
    }
    return 0;
}
