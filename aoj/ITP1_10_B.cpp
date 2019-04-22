#include <bits/stdc++.h>
using namespace std;

const double pi = 3.141592653589793;

signed main() {
	double a, b, c;
	cin >> a >> b >> c;
	c *= pi / 180;

	double S = a * b * sin(c) / 2;
	double L = sqrt(a * a + b * b - (2 * a * b * cos(c))) + a + b;
	double h = 2 * S / a;

	printf("%.9lf\n", S);
	printf("%.9lf\n", L);
	printf("%.9lf\n", h);
}
