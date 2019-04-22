#include <bits/stdc++.h>
using namespace std;

signed main() {
	int n;
	cin >> n;
	vector<double> x(n), y(n);
	for (auto& e : x) {
		cin >> e;
	}
	for (auto& e : y) {
		cin >> e;
	}

	double d = 0;

	for (int i = 0; i < n; ++i) {
		d += abs(x[i] - y[i]);
	}

	printf("%.6lf\n", d);
	d = 0;

	for (int i = 0; i < n; ++i) {
		d += (x[i] - y[i]) * (x[i] - y[i]);
	}

	printf("%.6lf\n", sqrt(d));
	d = 0;

	for (int i = 0; i < n; ++i) {
		d += abs((x[i] - y[i]) * (x[i] - y[i]) * (x[i] - y[i]));
	}

	printf("%.6lf\n", cbrt(d));
	d = 0;


	for (int i = 0; i < n; ++i) {
		d = max((int)d, abs((int)(x[i] - y[i])));
	}

	printf("%.6lf\n", d);
}
		



