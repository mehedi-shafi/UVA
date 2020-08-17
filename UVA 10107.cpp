#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int n = 0, a, arr[10001];
    while (cin >> a){
        arr[n++] = a;
        sort (arr, arr+n);
        if (n % 2 != 0)
            cout << arr[((n+1)/2)-1] << endl;
        else
            cout << ((arr[(n/2)-1] + arr[(n/2)])/2) << endl;
    }
    return 0;
}
