#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main ()
{
    int i, j, k, l, t, pos, commands[102];
    string command;
    cin >> t;
    while (t--){
        cin >> j;
        pos = 0;
        for (i=1; i<=j; ++i){
            cin >> command;
            if (command == "LEFT"){
                pos--;
                commands[i] = -1;
            }
            else if (command == "RIGHT"){
                pos++;
                commands[i] = 1;
            }
            else {
                scanf (" AS %d", &k);
                pos += commands[k];
                commands[i] = commands[k];
            }
        }
        cout << pos << endl;
    }
    return 0;
}
