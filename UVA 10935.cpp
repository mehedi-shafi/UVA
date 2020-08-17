#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main ()
{
    int n;
    list <int> cards;
    vector <int> discards;
    while (cin >> n && n){
        cards.clear();
        discards.clear();
        for (int i = 1; i <= n; i++)
            cards.push_back(i);
        while (cards.size() > 1){
            discards.push_back(cards.front());
            cards.pop_front();
            cards.push_back(cards.front());
            cards.pop_front();
        }
        cout << "Discarded cards:";
        for (int i = 0; i < discards.size(); i ++){
            if (i == 0)
                cout << " " << discards[i];
            else
                cout << ", " << discards[i];

        }
        cout << endl;

        cout << "Remaining card: " << cards.front() << endl;
    }
    return 0;
}

