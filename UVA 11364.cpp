#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--){
        int n, prev = 0;
        vector <int> vect;
        cin >> n;
        while (n--){
            int a;
            cin >> a;
            vect.push_back(a);
        }
        sort (vect.begin(), vect.end());
        int distance = (vect[vect.size()-1] - vect[0] ) * 2 ;
        cout << distance << endl;
    }
    return 0;
}
