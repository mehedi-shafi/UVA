#include <iostream>
using namespace std;
long long f91(long long n)
{
    if (n<=100)
        f91(f91(n+11));
    if (n>100)
        return n-10;

}

int main ()
{
    long long n;
    while (cin >> n){
        if (n==0)
            break;
        cout << "f91(" << n << ") = " << f91(n) << endl;
    }
    return 0;
}
