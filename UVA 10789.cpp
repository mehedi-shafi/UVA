#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
bool isPrime(int a)
{
    if (a == 1)
        return false;
    for (int i = 2; i <= a/2; i++){
        if (a % i == 0)
            return false;
    }
    return true;
}
int main ()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        string a;
        int arr[125] = {0};
        bool yes = false;
        cin >> a;
        for (int j = 0; j < a.size(); j++){
            ++arr[a[j]];
        }
        cout << "Case " << i << ": ";

        for (int j = 0; j < 125; j++){
            if (isPrime(arr[j]) && arr[j]){
                yes = true;
                printf ("%c", j);
            }
        }
        if (!yes)
            cout << "empty";
        cout << endl;
    }
    return 0;
}
