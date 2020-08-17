#include <bits/stdc++.h>
using namespace std;
struct player {
    string name;
    int att, def;
}p[12];

void swp (int i, int j)
{
    player temp = p[i];
    p[i] = p[j];
    p[j] = temp;
}

void solution()
{
    for (int i = 1; i <10; i++){
        for (int j = i+1; j <= 10; j++){
            if (p[i].att < p[j].att)
                swp (i,j);
            else if (p[i].att == p[j].att){
                if (p[i].def > p[j].def)
                    swp(i,j);
                else if (p[i].def == p[j].def)
                {
                    if (p[i].name.compare(p[j].name) > 0)
                        swp (i,j);
                }
            }
        }
    }

    for (int i = 1; i < 5; i++){
        for (int j = i+1; j <= 5; j++){
            if (p[i].name.compare(p[j].name) > 0)
                swp (i, j);
        }
    }

    for (int i = 6; i < 10; i++){
        for (int j = i+1; j <= 10; j++){
            if (p[i].name.compare(p[j].name)>0)
                swp (i, j);
        }
    }
}

int main ()
{
    int t, k = 1;
    cin >> t;
    while (t--){
        for (int i = 1; i <= 10; i++){
            cin >> p[i].name >> p[i].att >> p[i].def;
        }
        solution();
        cout << "Case " << k++ << ":" << endl;
        cout << "(";
        for (int i = 1; i < 6; i++){
            if (i != 1)
                cout << ", ";
            cout << p[i].name;
        }
        cout << ")" << endl;

        cout << "(";
        for (int i = 6; i < 11; i++){
            if (i != 6)
                cout << ", ";
            cout << p[i].name;
        }
        cout << ")" << endl;
    }
    return 0;
}
