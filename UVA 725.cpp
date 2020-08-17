#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n, k = 0;
  bool found;
  while (cin >> n && n){
    found = false;
    if (k != 0)
      cout << endl;
    k++;
      ///The thing is quite the complicated. :p 
    if (!found)
      cout << "There are no solutions for " << n << "." << endl;
  }
  return 0;
}
