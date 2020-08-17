#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, p, k = 1;
    while (cin >> n >> p && n && p){
        cin.ignore();
        string s;

        if (k != 1)
            cout << endl;
        for (int i = 0; i < n; i++)
            getline(cin, s);

        double price, curr;
        int met, cm = -1;

        string name, propos;

        for (int i = 0; i < p; i++){
            getline(cin, name);
            cin >> price >> met;
            cin.ignore();
            if (met > cm){
                propos = name;
                cm = met;
                curr = price;
            }
            else if (met == cm && price < curr){
                propos = name;
                cm = met;
                curr = price;
            }
            for (int j = 0; j < met; j++)
                getline(cin, s);
        }

        cout << "RFP #" << k++ << endl;
        cout << propos << endl;
    }

    return 0;
}
