#include <bits/stdc++.h>
using namespace std;
int h, m, s, c;
void convert(string ss)
{
    h = ss[0]-'0';
    h = h*10 + (ss[1]-'0');
    m = ss[2] - '0';
    m = m*10 + (ss[3] - '0');
    s = ss[4] - '0';
    s = s*10 + (ss[5] - '0');
    c = ss[6] - '0';
    c = c*10 + (ss[7]-'0');
}
int main ()
{
    string in;
    int hh, mm, ss, cc;
    while (cin >> in){
        convert(in);
        hh = mm = ss = cc = 0;
        cout << h << m << s << c << endl;
        int total_s = (h*60*60) + (m*60) + s;
        int total_c = total_s * 100 + c;
        cc = total_c % 100;
        ss = total_s % 100;
        total_s -= total_s % 100;
        mm = total_s % 100;
        total_s -= mm;
        hh = total_s % 10;

        cout << hh;
        (mm < 10) ? cout << "0" << mm : cout << mm;
        (ss < 10) ? cout << "0" << ss : cout << ss;
        (cc < 10) ? cout << "0" << cc : cout << cc;
        cout << endl;
    }
}
