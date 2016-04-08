#include <iostream>
using namespace std;

int main ()
{
    int empty_bottle;
    while (cin >> empty_bottle){
        int full_bottle, total = 0;
        if (empty_bottle==0)
            break;
        while (empty_bottle>=3){
        full_bottle = empty_bottle/3;
        empty_bottle = empty_bottle - (full_bottle*3) + full_bottle;
        total += full_bottle;
        }
        if (empty_bottle == 2)
            total += 1;
        cout << total << endl;
    }
    return 0;
}
