#include <iostream>
using namespace std;

long long revIt(long long num)
{
    long long rev = 0;
    while (num!=0){
        rev = (rev*10) + (num%10);
        num /= 10;
    }
    return rev;
}

bool isPalindrom(long long  a)
{
    if(a == revIt(a))
        return true;
    else
        return false;
}


int main ()
{
    int t;
    cin >> t;
    while (t--){
        int COUNT = 0;
        long long number;
        cin >> number;
        while (!isPalindrom(number)){
            number += revIt(number);
            ++COUNT;
        }
        cout << COUNT << " " << number << endl;
    }
    return 0;
}
