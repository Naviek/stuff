#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
	int n, m, c;
	cin >> n >> m >> c;
	vector<int> b(m), a(m);
	int ans = 0;

	for (int i = 0; i < m; ++i) {
		cin >> b[i];
	}

	for (int i = 0; i < n; ++i) {
		int cnt = c;
		for (int j = 0; j < m; ++j) {
			cin >> a[j];
			cnt += a[j] * b[j];
		}
		if (cnt > 0) ans++;
	}

	cout << ans << endl;
}
