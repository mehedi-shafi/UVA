#include <iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int c = 0;
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if (arr[i] > arr[j])
                    ++c;
            }
        }
        cout << "Optimal train swapping takes " << c << " swaps." << endl;
    }
    return 0;
}
