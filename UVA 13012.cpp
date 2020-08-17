#include <iostream>
using namespace std;
int main ()
{
    int n;
    while (cin >> n){
        int a, c = 0;
        for (int i = 0; i<5; i++){
            cin >> a;
            if (a == n)
                ++c;
        }
        cout << c << endl;
    }
    return 0;
}
