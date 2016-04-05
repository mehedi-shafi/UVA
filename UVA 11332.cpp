#include <iostream>
using namespace std;

long long int sum(long long int num){
    long long int temp = 0;
    while (num>=10){
        temp += (num%10);
        num /= 10;
    }
    temp += num;
    return temp;
}

int main ()
{
    long long int number;
    while (cin >> number){
        if (number == 0)
            break;
        while (number>9){
            number = sum(number);
        }
        cout << number << endl;
    }
    return 0;
}
