#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int arr[110][110], r, c;
void change(int n, int m)
{
    if (n != 0){
        if (m != 0)
            ++arr[n-1][m-1];
        ++arr[n-1][m];
        if (m != c)
            ++arr[n-1][m+1];
    }
    if (m != 0)
        ++arr[n][m-1];
	++arr[n][m];
	if (m != c)
        ++arr[n][m+1];
    if (n != r){
        if (m != 0)
            ++arr[n+1][m-1];
        ++arr[n+1][m];
        if (m != c)
            ++arr[n+1][m+1];
    }
}
int main ()
{
	int m, n, k = 1;
	while (cin >> m >> n){
		if (m == 0 && n == 0)
			break;
        r = m - 1;
        c = n - 1;
		memset(arr, 0, sizeof(arr));
		string a[m];
		for (int i = 0; i < m; i++){
			cin >> a[i];
			for (int j = 0; j < n; j++){
				if (a[i][j] == '*')
					change(i, j);
			}
		}
		if (k != 1)
            cout << endl;
		cout << "Field #" << k++ << ":" << endl;
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				if (a[i][j] == '*')
					cout << '*';
				else
					cout << arr[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
