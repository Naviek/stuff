#include <bits/stdc++.h>
using namespace std;

double ave(vector<double> a) {
	return accumulate(a.begin(), a.end(), 0.0) / a.size();
}

signed main() {
	int n;
	double s;
	while (cin >> n and n) {
		double sum = 0;
		vector<double> a;
		for (int i = 0; i < n; ++i) {
			cin >> s;
			a.push_back(s);
		}
		double aver = ave(a);

		for (int i = 0; i < n; ++i) {
			sum += (a[i] - aver) * (a[i] - aver);
		}
		sum /= n;
		sum = sqrt(sum);

		printf("%.9lf\n", sum);
	}
}
