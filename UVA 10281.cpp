#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
	char s[1000];
	int time = 0, speed = 0;
	double distance = 0;
	while (cin.getline(s, sizeof(s))){
		int h, m, sc, n_s;
		int n = sscanf(s, "%d:%d:%d %d", &h, &m, &sc, &n_s);
		int now = h*3600 + m*60 + sc;
		distance += (now - time) * speed;
		time = now;
		if (n == 3)
			printf ("%02d:%02d:%02d %.2lf km\n", h, m, sc, distance/3600);
		else if (n == 4)
			speed = n_s;
	}
	return 0;
}
