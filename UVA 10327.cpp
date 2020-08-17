#include <bits/stdc++.h>
using namespace std;

int n, arr[1010];
int main ()
{
	while (cin >> n){
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int flip = 0;
		for (int i = 1; i < n; i++){
			for (int j = n-1; j >= i; j--){
				if (arr[j-1] > arr[j]){
					swap (arr[j-1], arr[j]);
					flip++;
				}
			}
		}
		cout << "Minimum exchange operations : " << flip << endl;
	}
	return 0;
}
