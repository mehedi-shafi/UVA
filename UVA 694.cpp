#include <iostream>
using namespace std;
int main ()
{
    long long num, limit;
    int k = 1, c;
    while (cin >> num >> limit){
        if (num < 0 && limit < 0)
            break;
        cout << "Case " << k++ << ": A = " << num << ", limit = " << limit << ", number of terms = ";
        c = 0;
        while (num <= limit && num != 1){
            if (num % 2 == 0) num /= 2;
            else  num = (3*num) + 1;
            ++c;
        }
        if (num == 1)
            ++c;
        cout << c << endl;
    }
    return 0;
}
