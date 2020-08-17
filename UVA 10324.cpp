#include <iostream>
using namespace std;

int main ()
{
    string a;
    int k = 1;
    while (cin >> a){
        if (a.compare("\n") == 0)
            break;
        int n;
        cin >> n;
        cout << "Case " << k << ":" << endl;
        ++k;
        while (n--){
            int b, c;
            cin >> b >> c;
            char track;
            bool yes = true;
            if (b>c){
                track = a[c];
                for (int i = c; i<=b; i++){
                    if (a[i] != track){
                        yes = false;
                        break;
                    }
                }
                if (yes){
                    cout << "Yes" << endl;
                }
                else {
                    cout << "No" << endl;
                }
            }
            else if (b==c){
                cout << "Yes" << endl;
            }
            else{
                track = a[b];
                for (int i = b; i <= c; i++){
                    if (a[i] != track){
                        yes = false;
                        break;
                    }
                }
                if (yes){
                    cout << "Yes" << endl;
                }
                else{
                    cout << "No" << endl;
                }
            }
        }
    }
    return 0;
}
