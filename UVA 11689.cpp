#include <iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--){
        int init, taken, ret;
        cin >> init >> taken >> ret;
        init += taken;
        taken = 0;
        while(init >= ret){
            int temp = (init / ret);
            taken += temp;
            init = (init - (temp * ret)) + temp;
        }
        cout << taken << endl;
    }
    return 0;
}
