#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string a, b;
    while (cin >> a >> b){
        if (a=="0" && b=="0")
            break;
        int carry = 0, COUNT = 0;
        if (a.size() == b.size()){
            for (int i = 0; i<a.size(); i++){
                if (((a[a.size()-1-i]-'0')+(b[b.size()-1-i]-'0')+carry)>=10){
                    ++COUNT;
                    carry = 1;
                }
                else
                    carry = 0;
            }
        }
        else if (a.size()>b.size()){
            for (int i = 0; i<b.size(); i++){
                if (((a[a.size()-1-i]-'0')+(b[b.size()-1-i]-'0')+carry)>=10){
                    ++COUNT;
                    carry = 1;
                }
                else
                    carry = 0;
            }
            for (int i = 0; i<(a.size()-b.size()); i++){
                if (((a[a.size()-b.size()-i-1]-'0')+ carry)>=10){
                    ++COUNT;
                    carry = 1;
                }
                else
                    carry = 0;
            }
        }

        else if (b.size() > a.size()){
            for (int i = 0; i<a.size(); i++){
                if (((a[a.size()-1-i]-'0')+(b[b.size()-1-i]-'0')+carry)>=10){
                    ++COUNT;
                    carry = 1;
                }
                else
                    carry = 0;
            }
            for (int i = 0; i<(b.size()-a.size()); i++){
                if (((b[b.size()-a.size()-i-1]-'0')+ carry)>=10){
                    ++COUNT;
                    carry = 1;
                }
                else
                    carry = 0;
            }
        }
        if (COUNT == 0)
            cout << "No carry operation." << endl;
        else if (COUNT == 1)
            cout << COUNT << " carry operation." << endl;
        else
            cout << COUNT << " carry operations." << endl;
    }
    return 0;
}
