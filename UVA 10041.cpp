#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    long long t;
    cin >> t;
    while (t--){
        int r, dis1 = 0, dis2 = 0, dis;
        vector <int> vect;
        cin >> r;
        for (int i = 0; i < r; i++){
            int a;
            cin >> a;
            vect.push_back(a);
        }
        sort(vect.begin(), vect.end());
		if (r % 2 == 0){
			int vito1 = vect[(r-1)/2];
			int vito2 = vect[r/2];
			for (int i = 0; i < r; i++){
				dis1 += abs(vito1 - vect[i]);
				dis2 += abs(vito2 - vect[i]);
			}
			dis = max(dis1, dis2);
		}
		else{
			int vito = vect[(r-1)/2];
			for (int i = 0; i < r; i++)
				dis1 += abs(vito - vect[i]);
			dis = dis1;
		}
		cout << dis << endl;
    }
    return 0;
}
