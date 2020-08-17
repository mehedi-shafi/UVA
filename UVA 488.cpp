#include <iostream>
using namespace std;
int main ()
{
    long long t;
    cin >> t;
    for (int k = 0; k<t; k++){
        long long freq, amplit;
        cin >> amplit >> freq;
        if (k!=0)
            cout << "\n";
        for (int f = 0; f<freq; f++){
            int curre = 1;
            if (f!=0)
                cout << "\n";
            for (int i = 1; i<=amplit; i++){
                for (int j = 0; j<i; j++)
                    cout << curre;
                cout << "\n";
                ++curre;
            }
            curre-=2;
            for (int i = amplit-1; i>0; i--){
                for (int j = 0; j<i; j++)
                    cout << curre;
                cout << "\n";
                --curre;
            }
        }
    }
    return 0;
}
