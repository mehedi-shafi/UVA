#include <bits/stdc++.h>
using namespace std;

long long fact[21];

void factorial()
{
    fact[0] = 1;
    for (int i = 1; i < 21; i++){
        fact[i] = fact[i-1] * i;
    }
}

string permute(const string& source, long long per)
{
    string res(source);
    for (int i = 0; i < source.size(); i++){
        sort (res.begin()+i, res.end());
        if (per == 0)
            break;
        int c = i + per / fact[source.size() - i- 1];
        swap (res[i], res[c]);
        per %= fact[source.size() - i - 1];
    }
    return res;
}
int main ()
{
    factorial();
    int t;
    cin >> t;
    while (t--){
        string a;
        long long n;
        cin >> a;
        cin >> n;
        cout << permute(a, n) << endl;
    }
}
