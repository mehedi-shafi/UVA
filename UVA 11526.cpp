#include <iostream>
#include <cmath>
using namespace std;

long long H(long long n)
{
    long long total = 0;
    for (long long i = 1; n/i>=2; i++)
    {
        long long diff = ((n/i)-(n/(i+1)));
        if (diff>1)
            total += (i*diff) + (n/i);
        else
            total += (i*diff);
        cout << diff << " " << i*diff << " " << (n/i) <<  endl;
        //cout << total << endl;
    }
    return total;
}

int main ()
{
    long long t, num;
    cin >> t;
    while (t--){
        cin >> num;
        cout << H(num) << endl;
    }
    return 0;
}
