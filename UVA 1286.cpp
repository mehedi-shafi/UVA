#include <iostream>
#include <string>
#include <iomanip>
#include <string.h>
using namespace std;
bool isnum(char a)
{
    if (a >= '0' && a <= '9')
        return true;
    return false;
}
int main()
{
    int t;
    string s;
    cin >> t;
    int arr[4];
    while (t--){
        cin >> s;
        memset(arr, 0, sizeof(arr));
        int i = 0;
        while (i < s.size()){
            if (s[i] == 'C'){
                if (isnum(s[i+1])){
                    ++i;
                    int temp = 0;
                    while (isnum(s[i])){
                        temp = (temp*10) + (s[i]-'0');
                        ++i;
                    }
                    --i;
                    arr[0] += temp;
                }
                else{
                    ++i;
                    ++arr[0];
                }
            }
            else if (s[i] == 'N'){
                    if (isnum(s[i+1])){
                    ++i;
                    int temp = 0;
                    while (isnum(s[i])){
                        temp = (temp*10) + (s[i]-'0');
                        ++i;
                    }
                    --i;
                    arr[1] += temp;
                }
                else{
                    ++i;
                    ++arr[1];
                }
            }
            else if (s[i] == 'H'){
                if (isnum(s[i+1])){
                    ++i;
                    int temp = 0;
                    while (isnum(s[i])){
                        temp = (temp*10) + (s[i]-'0');
                        ++i;
                    }
                    --i;
                    arr[2] += temp;
                }
                else{
                    ++i;
                    ++arr[2];
                }
            }
            else if (s[i] == 'O'){
                    if (isnum(s[i+1])){
                    ++i;
                    int temp = 0;
                    while (isnum(s[i])){
                        temp = (temp*10) + (s[i]-'0');
                        ++i;
                    }
                    --i;
                    arr[3] += temp;
                }
                else{
                    ++i;
                    ++arr[3];
                }
            }
            else
                ++i;
        }
        double ans = arr[0] * 12.01 + arr[1] * 14.01 + arr[2] * 1.008 + arr[3] * 16.00;
        cout << setprecision(3) << fixed << ans << endl;
    }
    return 0;
}
