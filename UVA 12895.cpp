#include <iostream>
#include <math.h>

using namespace std;

bool isArmstrong(string a, int power)
{
    long long ans = 0, num = 0;
    for (int i = 0; i<power; i++){
        num = (num*10) + (a[i]-'0');
        ans += round (pow ((a[i]-'0'), power));
    }
    if (num == ans)
        return true;
    else
        return false;
}

int main ()
{
    long long t;
    cin >> t;
    while (t--){
        string num;
        cin >> num;
        int power = num.size();
        if (isArmstrong(num, power))
            cout << "Armstrong" << endl;
        else
            cout << "Not Armstrong" << endl;
    }
    return 0;
}
