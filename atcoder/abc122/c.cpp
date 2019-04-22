#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
	int n, q, num = 0;
	string s;
	cin >> n >> q >> s;
	vector<int> at(n);
	at[0] = 0;

	for (int i = 1; i < n; ++i) {
		if (s[i - 1] == 'A' and s[i] == 'C') {
			num++;
		}
		at[i] = num;
	}

	for (int i = 0; i < q; ++i) {
		int l, r;
		cin >> l >> r;
		int ans = at[r - 1] - at[l - 1];

		cout << ans << endl;
	}
}
