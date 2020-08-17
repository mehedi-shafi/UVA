#include <iostream>
#include <string>

using namespace std;

int main ()
{
    long long l;
    while (cin >> l){
        if (l==0)
            break;
        string str;
        char curr = 'o';
        bool print = true;
        long long minimum = l, p_pos;
        cin >> str;

        for (long long i = 0; i<l; i++){
            if (str[i] == 'Z'){
                cout << 0 << endl;
                print = false;
                break;
            }
            if (str[i] == 'R' || str[i] == 'D'){
                if(curr == 'o'){
                    curr = str[i];
                    p_pos = i;
                    continue;
                }
                if (str[i] == curr){
                    p_pos = i;
                }
                else if (str[i] != curr){
                    curr = str[i];
                    int temp = (i-p_pos);
                    if (temp<=minimum)
                        minimum = temp;
                    p_pos = i;
                }
            }
        }
        if (print)
            cout << minimum << endl;
    }
    return 0;
}
