#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n)
{
    if (n == 0)
        return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

bool is_emirp(int n)
{
    int rev = 0, temp = n;
    while (n > 0){
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    if (rev == temp)
        return false;

    if (is_prime(rev))
        return true;
    else
        return false;
}

int main ()
{
    int n;
    while (cin >> n){
        if (is_prime(n)){
            if (is_emirp(n))
                cout << n << " is emirp." << endl;
            else
                cout << n << " is prime." << endl;
        }
        else
            cout << n << " is not prime." << endl;
    }
    return 0;
}
