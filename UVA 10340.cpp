#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string a, b;
	int i, j;
	while (cin >> a >> b){
		j = 0;
		for (i = 0; i < b.size(); i++){
			if (b[i] == a[j])
				j++;
		}
		if (j == a.size())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
