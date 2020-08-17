#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string s;
    bool nel = false;
    while (cin >> s){
        if (nel)
            cout << endl;
        int mod_4 = 0, mod_400 = 0, mod_100 = 0, mod_55 = 0, mod_15 = 0;
        bool leap = false, hulu = false, bulu = false;
        for (int i = 0; i<s.size(); i++){
            int temp = s[i] - '0';
            mod_100 = (mod_100*10) + temp;
            mod_15 = (mod_15*10) + temp;
            mod_4 = (mod_4*10) + temp;
            mod_400 = (mod_400 * 10) + temp;
            mod_55 = (mod_55*10) + temp;
            mod_100 %= 100;
            mod_15 %= 15;
            mod_400 %= 400;
            mod_4 %= 4;
            mod_55 %= 55;
        }
        if ((mod_400==0) || (mod_4==0 && mod_100 != 0)){
            leap = true;
            if (mod_55 == 0)
                bulu = true;
        }
        if (mod_15 == 0)
            hulu = true;
        if (!leap && !hulu && !bulu)
            cout << "This is an ordinary year." << endl;
        if (leap)
            cout << "This is leap year." << endl;
        if (hulu)
            cout << "This is huluculu festival year." << endl;
        if (bulu)
            cout << "This is bulukulu festival year." << endl;
        nel = true;
    }
    return 0;
}
