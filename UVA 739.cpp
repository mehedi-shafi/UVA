#include <bits/stdc++.h>
using namespace std;
void middle(string a)
{
    for (int i = a.size()+10; i < 35; i++)
        cout << " ";
}
int main ()
{
    int arr[26] = {0};
    arr['B' - 65] = arr['P' - 65] = arr['F' - 65] = arr['V' - 65] = 1;
    arr['C' - 65] = arr['S' - 65] = arr['K' - 65] = arr['G' - 65] = arr['J' - 65] = arr['Q' - 65] = arr['X' - 65] = arr['Z' - 65] = 2;
    arr['D' - 65] = arr['T' - 65] = 3;
    arr['L' - 65] = 4;
    arr['M' - 65] = arr['N' - 65] = 5;
    arr['R' - 65] = 6;
    string in;
    char code[4];
    string frnt = "         ";
    cout << frnt << "NAME";
    middle("NAME");
    cout << "SOUNDEX CODE" << endl;
    while (cin >> in){
        int k = 0;
        code[k++] = in[0];
        for (int i = 1; i < in.size(); i++){
            if (arr[in[i]-65] != arr[in[i-1]-65] && arr[in[i]-65] != 0 &&  k <= 3){
                code[k++] = arr[in[i]-65] + '0';
            }
        }
        while(k <= 3){
            code[k++] = '0';
        }
        cout << frnt << in;
        middle(in);
        for(int i = 0; i < 4; i++)
            cout << code[i];
        cout << endl;
    }
    cout << " " << frnt << frnt << "END OF OUTPUT" << endl;
    return 0;
}

