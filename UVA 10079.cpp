#include <iostream>
using namespace std;
int main ()
{
    long long int a, b, c, i, n;
    while (cin >> n){
        if (n<0) break;
        a=0;
        b=1;
        for(i=0;i<=n;i++)
        {
            c=a+b;
            ++a;
            b=c;
        }
        cout << c << endl;
    }
    return 0;
}
