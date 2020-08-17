#include <bits/stdc++.h>
using namespace std;

string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
string thousands[] = {"", "M", "MM", "MMM"};

string toroman(int n)
{
	string roman;
	int o = n % 10;
	n /= 10;
	int t = n % 10;
	n /= 10;
	int h = n % 10;
	n /= 10;
	int th = n%10;

	roman += thousands[th] + hundreds[h] + tens[t] + ones[o];
	return roman;

}

int main ()
{
	string in;
	map <string, string> m;

	for (int i = 1; i < 4000; i++){
		string roman = toroman(i);
		//cout << roman << endl;
		stringstream strm;
		string num;
		strm << i;
		strm >> num;
		m[roman] = num;
		m[num] = roman;
	}
	while (cin >> in)
		cout << m[in] << endl;

	return 0;
}
