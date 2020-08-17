#include <iostream>
#include <string>
using namespace std;
bool won(string a[], char c)
{
	if (a[0][0] == c && a[0][1] == c && a[0][2] == c)
		return true;
	if (a[1][0] == c && a[1][1] == c && a[1][2] == c)
		return true;
	if (a[2][0] == c && a[2][1] == c && a[2][2] == c)
		return true;
	if (a[0][0] == c && a[1][0] == c && a[2][0] == c)
		return true;
	if (a[0][1] == c && a[1][1] == c && a[2][1] == c)
		return true;
	if (a[0][2] == c && a[1][2] == c && a[2][2] == c)
		return true;
	if (a[0][0] == c && a[1][1] == c && a[2][2] == c)
		return true;
	if (a[0][2] == c && a[1][1] == c && a[2][0] == c)
		return true;
	return false;
}
int main()
{
	int t, k = 1;
	cin >> t;
	for (int k = 0; k < t; k++){
		string a[3];
		int x = 0, d = 0;
		for (int i = 0; i < 3; i++){
			cin >> a[i];
			for (int j = 0; j < 3; j++){
				if (a[i][j] == 'X')
					++x;
				else if (a[i][j] == 'O')
					++d;
			}
		}
		bool valid;
		if (x == d && won(a, 'X'))
			cout << "no" << endl;
		else if (x == d+1 && won(a, 'O'))
			cout << "no" << endl;
		else if (x < d)
            cout << "no" << endl;
        else if (x - d > 1)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
	return 0;
}
