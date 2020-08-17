#include <iostream>
#include <cmath>
using namespace std;
long long arr[100010];
int k;
int cont ()
{
    int temp = k;
    while(arr[k+1] - arr[k] == 1)
        ++k;
    int dif = arr[k] - arr[temp];
    int t = 10;
    while (abs((arr[temp]%t) - (arr[k]%t)) != dif || ((arr[temp]%t)>arr[k]%t)){
        t *= 10;
    }
    return arr[k++]%t;
}
int main ()
{
    int n, cs = 1;
    while (cin >> n && n){
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        k = 0;
        cout << "Case " << cs++ << ":" << endl;
        while (k < n){
            if (arr[k+1] - arr[k] != 1 ){
                cout << "0" << arr[k++] << endl;
            }
            else{
                cout << "0" << arr[k] << "-";
                cout << cont() << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
