#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
bool isAlpha(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return true;
	return false;
}
int main ()
{
	string a;
	while (getline(cin, a)){
		int arr[128] = {0}, mx = 0;
		for (int i = 0; i < a.size(); i++){
            if (isAlpha(a[i]))
                ++arr[a[i]];
			if (arr[a[i]] > mx)
				mx = arr[a[i]];
		}
		for (int i = 0; i < 128; i++){
			if (arr[i] == mx){
				printf ("%c", i);
			}
		}
		cout << " " << mx << endl;
	}
	return 0;
}
