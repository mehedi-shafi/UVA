#include<iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int n;
    while (cin >> n && n){
        double arr[n], total = 0, avg;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
            total += arr[i];
        }
        avg = total / n;
        cout << "Total : " << total << " Avg : " << avg << endl;
        double mo = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] < avg){
                mo += avg - arr[i];
                cout << (avg - arr[i]) << endl;
            }
            cout << "move : " << mo << endl;
        }
        cout << "$" << setprecision(2) << fixed << mo << endl;
    }
}
