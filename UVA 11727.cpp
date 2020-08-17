#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    for (int i =1; i<=t; ++i){
        int a, b, c;
        vector <int> salary;
        cin >> a >> b >> c;
        salary.push_back(a);
        salary.push_back(b);
        salary.push_back(c);
        sort(salary.begin(), salary.end());
        cout << "Case " << i << ": " << salary[1] << endl;
    }
    return 0;
}
