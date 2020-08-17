#include <iostream>
using namespace std;
int main ()
{
    int n, k = 0;
    while (cin >> n)
    {
        if (n == 0)
            break;
        ++k;
        int arr[101], sum = 0, height, c = 0;
        for (int i = 0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        height = sum/n;
        for (int i = 0; i<n; i++){
            if (arr[i] < height)
                c += (height - arr[i]);
            else if (arr[i] > height)
                c+= (arr[i] - height);
        }
        c /= 2;
        cout << "Set \#" << k << endl;
        cout << "The minimum number of moves is " << c << ".\n" << endl;
    }
    return 0;
}
