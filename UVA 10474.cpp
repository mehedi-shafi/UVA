#include <iostream>
#include <algorithm>
using namespace std;
int arr[10005], item, pos;

void binarySearch(int low, int high){
    if(low<=high){
        int middle = (low+high)/2;
        if(arr[middle]==item)
            pos = middle;
        if(item <= arr[middle]) binarySearch(low, middle-1);

        else binarySearch(middle+1, high);
    }
    else return;
}

int main ()
{
    int n, q, k = 1;
    while (cin >> n >> q){
        if (n == 0 && q == 0)
            break;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        cout << "CASE# " << k++ << ":" << endl;
        while (q--){
            cin >> item;
            pos = -1;
            binarySearch(0, (n-1));
            if (pos < 0)
                cout << item << " not found" << endl;
            else
                cout << item << " found at " << (pos+1) << endl;
        }
    }
    return 0;
}
