#include <iostream>
using namespace std;
bool isPrime (long long a)
{
    for (int i = 2; i<=a/2; i++){
        if (a%i == 0)
            return false;
    }
    return true;
}
bool stop(long long a)
{
    long long temp = a;
    if (isPrime(a)){
        long long rev = 0;
        while (a>0){
            rev = (rev*10) + (a%10);
            a /= 10;
        }
        if (rev == temp)
            return true;
    }
    return false;
}

int main ()
{
    long long a;
    while (cin >> a){
        cout << (a*2) << endl;
        if (stop(a))
            break;
    }
    return 0;
}
