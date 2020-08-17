#include <iostream>
using namespace std;
long long int ar[10000];
void squar ()
{
    int i;
    for (i=0; i<10000; i++){
        ar[i] =(i*i);
    }
}
int main ()
{
    squar ();
    int a, b, i;
    while (cin >> a >> b){
        if (a==0 && b==0) break;
        int cnt = 0;
        for (i=0; i<10000; i++){
            if (ar[i]>=a && ar[i]<=b) ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
}
