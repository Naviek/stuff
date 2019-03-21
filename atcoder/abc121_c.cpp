#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
	int n, m;
	cin >> n >> m;
	vector<pair<ll, ll>> p(n);
	ll cnt = 0;

	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		p[i] = make_pair(a, b);
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < n; ++i) {
		ll a = p[i].first;
		ll b = p[i].second;

		if (m >= b) {
			cnt += a * b;
			m -= b;
		}
		else {
			cnt += a * m;
			break;
		}
	}

	cout << cnt << endl;
}
