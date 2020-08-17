#include <iostream>
using namespace std;

int main ()
{
	int h, u, d, f;
	while (cin >> h >> u >> d >> f){
		if (h == 0)
			break;
		h *= 100;
		u *= 100;
		d *= 100;
		int les = (u*f)/100;
		int climbed = 0, day = 1;
		while (climbed < h){
			climbed += u;
			if (u > 0)
				u -= les;
			if (climbed > h){
				cout << "success on day " << day << endl;
				break;
			}
			climbed -= d;
			if (climbed < 0){
					cout << "failure on day " << day << endl;
					break;
			}
			++day;
		}
	}
	return 0;
}
