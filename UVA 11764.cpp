#include <iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    for (int i =1; i<=t; ++i){
        int n, tall = 0, Short = 0, a, init;
        cin >> n;
        for (int j=0; j<n; ++j){
            if (j==0)
                cin >> init;
            else if (j!=0){
                cin >> a;
                if (a>init) ++tall;
                else if (init>a) ++Short;
                init = a;
            }
        }
        cout << "Case " << i << ": " << tall << " " << Short << endl;
    }
    return 0;
}
