#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int groups;
    string s;
    while (cin >> groups){
        if (groups == 0)
            break;
        cin >> s;
        int size_ = s.size()/groups, j, p;
        for (int i = 0; i<s.size(); i += size_){
            for (j = i, p = i+size_-1; j<p; j++, p--){
                char temp = s[j];
                s[j] = s[p];
                s[p] = temp;
            }
        }
        cout << s << endl;
    }
    return 0;
}
