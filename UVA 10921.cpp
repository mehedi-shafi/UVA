#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string in;
	while (getline (cin, in)){
		for (int i = 0; i < in.size(); i++){
			if (in[i] >= 'A' && in[i] <= 'C')
				cout << 2;
			else if (in[i] >= 'D' && in[i] <= 'F')
				cout << 3;
			else if (in[i] >= 'G' && in[i] <= 'I')
				cout << 4;
			else if (in[i] >= 'J' && in[i] <= 'L')
				cout << 5;
			else if (in[i] >= 'M' && in[i] <= 'O')
				cout << 6;
			else if (in[i] >= 'P' && in[i] <= 'S')
				cout << 7;
			else if (in[i] >= 'T' && in[i] <= 'V')
				cout << 8;
			else if (in[i] >= 'W' && in[i] <= 'Z')
				cout << 9;
			else
				cout << in[i];
		}
		cout << endl;
	}
}
