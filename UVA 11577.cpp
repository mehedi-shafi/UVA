#include <iostream>
#include <string>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    getchar();
    while (t--){
        string a;
        int arr[28] = {0}, highest = 0;
        getline (cin, a);
        for (int i = 0; i < a.size(); i++){
            if (a[i] >= 'A' && a[i] <= 'Z'){
                ++arr[a[i]-64];
                if (arr[a[i]-64] > highest)
                    highest = arr[a[i]-64];
            }
            else if(a[i] >= 'a' && a[i] <= 'z'){
                ++arr[a[i]-96];
                if (arr[a[i]-96] > highest)
                    highest = arr[a[i]-96];
            }
        }
        for (int i = 0; i < 28; i++){
            if (arr[i] == highest){
                printf ("%c", (i+96));
            }
        }
        cout << endl;
    }
    return 0;
}
