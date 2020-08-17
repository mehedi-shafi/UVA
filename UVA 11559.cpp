#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int n, b, h, w;
    while (cin >> n >> b >> h >> w){
        int cost, per_cost, a;
        vector <int> possible;
        for (int i = 0; i < h; i++){
            cin >> per_cost;
            cost = (per_cost * n);
            if (cost <= b){
                for (int j = 0; j<w; j++){
                    cin >> a;
                    if (a>=n){
                        possible.push_back(cost);
                    }
                }
            }
            else{
                for (int j = 0; j<w; j++)
                    cin >> a;
            }
        }

        if (possible.size() == 0)
            cout << "stay home" << endl;
        else {
            sort(possible.begin(), possible.end());
            cout << possible[0] << endl;
        }
    }
    return 0;
}
