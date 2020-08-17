#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t, r, h, x;
    int travel[25], hotel[25], res[25];
    while (cin >> t >> r >> h){
        vector <int> tr[20], re[20], ht[20];
        for (int i = 0; i < t; i++){
            cin >> travel[i];
            for (int j = 0; j < r; j++){
                cin >> x;
                tr[i].push_back(x);
            }
        }

        for (int i = 0; i < r; i++){
            cin >> res[i];
            for (int j = 0; j < h; j++){
                cin >> x;
                re[i].push_back(x);
            }
        }

        for (int i = 0; i < h; i++){
            cin >> hotel[i];
            for (int j = 0; j < t; j++){
                cin >> x;
                ht[i].push_back(x);
            }
        }
        int result = -1, H, T, R;
        for (int i = 0; i < t; i++){
            for (int j = 0; j < r; j++){
                if (tr[i][j] != 1){
                    for (int k = 0; k < h; k++){
                        if (re[j][k] == 1 || ht[k][i] == 1)
                            continue;
                        if (result == -1){
                            result = travel[i] + hotel[k] + res[j];
                            T = i;
                            R = j;
                            H = k;
                        }
                        else{
                            if (travel[i] + hotel[k] + res[j] < result){
                                result = travel[i] + res[j] + hotel[k];
                                T = i;
                                R = j;
                                H = k;
                            }

                        }
                    }
                }
            }
        }
        if (result == -1)
            cout << "Don't get married!" << endl;
        else
            cout << T << " " << R << " " << H << " " << ":" << result << endl;
    }
    return 0;
}
