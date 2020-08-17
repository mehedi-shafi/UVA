#include <iostream>
#include <string>
using namespace std;
string gimme (int number)
{
    int sum = 0;
    for (int i = 1; i<= (number/2); i++){
        if (number % i == 0){
            sum += i;
        }
    }
    if (sum == number)
        return "PERFECT";
    else if (sum < number)
        return "DEFICIENT";
    else
        return "ABUNDANT";
}

int main()
{
    cout << "PERFECTION OUTPUT" << endl;
    int n;
    while (cin >> n){
        if (n==0)
            break;
        if (n<10)
            cout << "    " << n << "  " << gimme(n) << endl;
        else if (n>9 && n <100)
            cout << "   " << n << "  " << gimme(n) << endl;
        else if (n>99 && n<1000)
            cout << "  " << n << "  " << gimme(n) << endl;
        else if (n>999 && n<10000)
            cout << " " << n << "  " << gimme(n) << endl;
        else
            cout << n << "  " << gimme(n) << endl;
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}
