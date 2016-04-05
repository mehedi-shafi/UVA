#include <iostream>
using namespace std;

int main ()
{
    int a, b, c, d;
    int total;
    while (cin >> a >> b >> c >> d){
        if (a==0 && b==0 && c==0 && d==0)
            break;
        total = 720;
        if (a>b)
            total += (a-b)*9;
        else
            total += (40+a-b)*9;

        total += 360;
        if (c>b)
            total += (c-b)*9;
        else
            total += (40+c-b)*9;
        if (c>d)
            total += (c-d)*9;
        else
            total += (40+c-d)*9;
        cout << total << endl;
    }
    return 0;
}
