#include <iostream>
#include <cmath>
using namespace std;
int gcd(int a, int b) {
  while (b != 0)  {
    int t = b;
    b = a % b;
    a = t;
  }
  return a;
}
int main ()
{
    int n;
    while (cin >> n){
        if (n==0) break;
        int g = 0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++)
            {
                g+=gcd(i,j);
            }
        }
        cout << g << endl;
    }
    return 0;
}
