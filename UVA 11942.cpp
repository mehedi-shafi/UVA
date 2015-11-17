#include <iostream>
using namespace std;
int main ()
{
    int t, i[10], j, flag;
    cout << "Lumberjacks:" << endl;
    cin >> t;
    while (t--){
        flag = 0;
        for (j=0; j<10; ++j){
            cin >> i[j];
        }
        if (i[0] < i[1]) {
            for (j=1; j<10; ++j){
                if (i[j] < i[j-1]) flag = 1;
        }
        }
        else if (i[0] > i[1]){
            for (j=1; j<10; ++j){
                if (i[j] > i[j-1]) flag = 1;
        }
        }
        if (flag == 1) cout << "Unordered" << endl;
        else cout << "Ordered" << endl;
    }
}
