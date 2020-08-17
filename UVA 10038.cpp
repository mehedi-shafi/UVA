#include <iostream>
int dis(int a, int b)
{
    if (a > b)
        return (a-b);
    return (b-a);
}

using namespace std;
int main ()
{
    int n;
    while (cin >> n){
        int arr[n] = {0};
        int a, prev;
        for (int i = 0; i < n; i++){
            cin >> a;
            if (i == 0)
                prev = a;
            int temp = dis(prev, a);
            if (temp < n)
                arr[temp] = 1;
            prev = a;
        }
        bool yes = true;
        for (int i = 1; i < n; i++){
            if (arr[i] == 0){
                yes = false;
                break;
            }
        }
        if (yes)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
    return 0;
}
