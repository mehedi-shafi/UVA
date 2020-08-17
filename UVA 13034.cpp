#include <iostream>
using namespace std;
int main ()
{
    int s;
    cin >> s;
    for (int k = 1; k<=s; k++){
        bool yes = true;
        int i = 0, a;
        while (i<13){
            cin >> a;
            if (a==0)
                yes = false;
            ++i;
        }
        if (yes)
            cout << "Set \#" << k << ": Yes" << endl;
        else
            cout << "Set \#" << k << ": No" << endl;
    }
    return 0;
}
