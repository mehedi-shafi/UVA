#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

void found (int a[], long long num)
{
    int i = 0, div;
    while (num > 0){
        if (i == 1 || i == 5)
            div = 10;
        else
            div = 100;
        a[i++] = num % div;
        num /= div;
    }
}
int main()
{
    long long num, k = 1;
    while (cin >> num){
        printf ("%4d.", k);
        k++;
        if (num == 0){
            cout << " 0" << endl;
            continue;
        }
        int a[10] = {0};
        found (a, num);
        bool kuti = true;
        for (int i = 9; i >= 0; i--){
            if (a[i] != 0){
                kuti = false;
                cout << " " << a[i];
                if (i == 8 || i == 4)
                    cout << " kuti";
                else if (i == 7 || i == 3)
                    cout << " lakh";
                else if (i == 6 || i == 2)
                    cout << " hajar";
                else if (i == 5 || i == 1)
                    cout << " shata";
            }
            else if (i == 4 && !kuti)
                cout << " kuti";
        }
        cout << endl;
    }
    return 0;
}
