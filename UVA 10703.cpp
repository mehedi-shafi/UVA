#include <bits/stdc++.h>
using namespace std;
int arr[510][510];
int main ()
{
    int h, w, n;
    while (cin >> w >> h >> n){
        memset(arr, 0, sizeof arr);
        if (h == 0 && w == 0 && n == 0)
            break;
        int x1, x2, y1, y2, i_, j_;
        while (n--){
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 > x2)
                swap(x1, x2);
            if (y1 > y2)
                swap(y1, y2);
            for (int i = y1; i <= y2; i++){
                for (int j = x1; j <= x2; j++){
                    arr[i][j] = 1;
                }
            }
        }
        int c = 0;
        for (int i = 1; i <= h; i++){
            for (int j = 1; j <= w; j++){
                if (!arr[i][j])
                    ++c;
            }
        }
        if (c == 0)
            cout << "There is no empty spots." << endl;
        else if (c == 1)
            cout << "There is one empty spot." << endl;
        else
            cout << "There are " << c << " empty spots." << endl;
    }
    return 0;
}
