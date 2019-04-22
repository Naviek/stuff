#include <bits/stdc++.h>
using namespace std;

signed main() {
	int n;
	cin >> n;

	vector<vector<int>> m(n);
	for (int i = 0; i < n; ++i) {
		m[i].resize(n);
	}

	for (int i = 0; i < n; ++i) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; ++j) {
			int v;
			cin >> v;
			m[u - 1][v - 1] = 1;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << m[i][j];
			if (j != n - 1) cout << ' ';
		}
		cout << endl;
	}
}
