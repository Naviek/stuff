#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n, m, l;
	cin >> n >> m >> l;
	vector<vector<int>> a(n, vector<int>(m)), b(m, vector<int>(l));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < l; ++j) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		string ans = "";
		for (int j = 0; j < l; ++j) {
			int sum = 0;
			for (int k = 0; k < m; ++k) {
				sum += a[i][k] * b[k][j];
			}
			ans += to_string(sum) + " ";
		}
		ans.pop_back();
		cout << ans << endl;
	}
}
