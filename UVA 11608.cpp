#include <iostream>
using namespace std;
int main()
{
    int s, k = 1;
    while (cin >> s){
        if (s < 0)
            break;
        int months[12], req;
        for (int i = 0; i < 12; i++)
            cin >> months[i];
            cout << "Case " << k++ << ":" << endl;
        for (int i = 0; i < 12; i++){
            cin >> req;
            if (req <= s){
                cout << "No problem! :D" << endl;
                s -= req;
            }
            else
                cout << "No problem. :(" << endl;
            s += months[i];
        }
    }
    return 0;
}
