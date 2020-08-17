#include <iostream>
using namespace std;
int main ()
{
    long int t, a, b, c, i;
    cin >> t;
    for (i=1; i<=t; i++){
        cin >> a >> b >> c;
        if (((a+b)>c) && ((a+c) > b) && ((b+c) > a)){
            if (a==b && b==c)
                cout << "Case " << i <<": Equilateral" << endl;
            else if ((a==b && a!=c) || (a==c && a!=b) || (b==c && c!=a)) cout << "Case " << i <<": Isosceles" << endl;
            else cout << "Case " << i <<": Scalene" << endl;
        }
        else cout << "Case " << i <<": Invalid" << endl;
    }
    return 0;
}
