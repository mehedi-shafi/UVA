#include <iostream>
using namespace std;

int mile(int a)
{
    int cost, unit;
    unit = 1;
    a -= 29;
    if (a>=30){
        int temp;
        temp = a/30;
        a = a - (temp*30);
        unit += temp;
    }
    if (a>=1)
        ++unit;

    cost = unit * 10;
    return cost;
}

int juice (int a)
{
    int cost, unit;
    unit = 1;
    a -= 59;
    if (a>=60){
        int temp;
        temp = a/60;
        a = a - (temp*60);
        unit += temp;
    }
    if (a>=1)
        ++unit;

    cost = unit * 15;
    return cost;
}

int main ()
{
    int t;
    cin >> t;
    for (int i = 1; i<=t; i++){
        int mile_cost = 0, juice_cost = 0;
        int n, a;
        cin >> n;
        while (n--){
            cin >> a;
            mile_cost += mile(a);
            juice_cost += juice(a);
        }
        if (mile_cost == juice_cost)
            cout << "Case " << i << ": Mile Juice " << mile_cost << endl;
        else if (mile_cost < juice_cost)
            cout << "Case " << i << ": Mile " << mile_cost << endl;
        else
            cout << "Case " << i << ": Juice " << juice_cost << endl;
    }
    return 0;
}
