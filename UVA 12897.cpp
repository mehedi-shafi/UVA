#include <bits/stdc++.h>
using namespace std;
int charmap[26];
void chng (char a, char b)
{
    for (int i = 0; i < 26; i++){
        if (charmap[i] == a-65)
            charmap[i] = b - 65;
    }
}
int main ()
{
    string str;
    int t;
    cin >> t;
    while (t--){
        for (int i = 0; i < 26; i++)
            charmap[i] = i;
        cin >> str;
        int change;
        cin >> change;
        while (change --){
            char a, b;
            cin >> a >> b;
            chng(b, a);
        }
		for(int i = 0; i < str.size(); i++){
            if (str[i]-65 <= 25 && str[i]-65 >= 0)
                printf ("%c", charmap[str[i]-65]+65);
            else
                cout << str[i];
		}
		cout << endl;
    }
    return 0;
}
