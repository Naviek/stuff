#include <bits/stdc++.h>
using namespace std;

signed main() {
	int n, cnt = 0;
	cin >> n;

	vector<int> a;
	a.push_back(1);
	for (int i = 1; i <= 5; ++i) {
		a.push_back(pow(9, i));
	}
	for (int i = 1; i <= 6; ++i) {
		a.push_back(pow(6, i));
	}

	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	for (auto e : a) cout << e << ' ';
	cout << endl << endl;

	for (int i = 0; i < a.size(); ++i) {
		if (a[i] <= n) {
			n -= a[i];
			cout << a[i] << ' ' << n << endl;
			cnt++;
			i = 0;
		}
	}

	cout << cnt << endl;
}
