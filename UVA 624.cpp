#include <bits/stdc++.h>
using namespace std;
#define  MAX 21
int arr[MAX];
bool check[MAX], curr[MAX];
int n, t;
long long l, ans;
void track(int k)
{
    if (k == t){
        long long temp = 0;
        for (int i = 0; i < t; i++){
            if (check[i])
                temp += arr[i];
        }
        if (temp <= l){
            if (ans < temp){
                ans = max (ans, temp);
                for (int i = 0; i < t; i++)
                    curr[i] = check[i];
            }
        }

        return;
    }
    check[k] = true;

    track(k+1);

    check[k] = false;

    track(k+1);

}
int main()
{
    while (cin >> l >> t){
        for (int i = 0; i < t; i++)
            cin >> arr[i];
        ans = 0;
        memset(curr, false, sizeof curr);
        track(0);
        for (int i = 0; i < t; i++){
            if (curr[i])
                cout << arr[i] << " ";
        }
        cout << "sum:" << ans << endl;
    }
    return 0;
}
