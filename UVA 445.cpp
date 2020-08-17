#include <iostream>
#include <string>
using namespace std;
bool isnumeric(char a)
{
    int temp = a - '0';
    if (temp >= 0 && temp <= 9)
        return true;
    return false;
}
int main ()
{
    string s;
    while (getline (cin, s)){
        int i = 0;
        while (i < s.size()){
            int num = 0;
            while (isnumeric(s[i])){
                num += (s[i] - '0');
                i++;
            }
            if (s[i] == '!'){
                cout << endl;
                ++i;
            }
            else{
                for (int j = 0; j < num; j++){
                    if (s[i] == 'b')
                        cout << " ";
                    else
                        cout << s[i];
                }
                ++i;
            }
        }
        cout << endl;
    }
    return 0;
}
