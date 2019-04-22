#include <bits/stdc++.h>
using namespace std;

signed main() {
	int n, m;
	cin >> n >> m;
	vector<int> x(m);
	for (auto& e : x) {
		cin >> e;
	}

	if (m == 1) {
		cout << 0 << endl;
		return 0;
	}

	sort(x.begin(), x.end());
	vector<int> a;

	for (int i = 1; i < m; ++i) {
		a.push_back(x[i] - x[i - 1]);
	}
	
	sort(a.begin(), a.end());

	for (int i = 0; i < n - 1; ++i) {
		if (!a.empty()) {
			a.pop_back();
		}
	}

	if (a.empty()) a.push_back(0);
	cout << accumulate(a.begin(), a.end(), 0) << endl;
}
