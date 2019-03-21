#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k;
vector<int> w(100010);

bool ok(int p) {
	int cw = 0, cnt = 1;
	for (int i = 0; i < n; ++i) {
		if (w[i] > p) return false;
		cw += w[i];
		if (cw > p) {
			cnt++;
			cw = w[i];
		}
	}

	return cnt <= k;
}

signed main() {
	cin >> n >> k;
	for (int i = 0; i < n; ++i) cin >> w[i];

	int l = 0, r = INT_MAX;
	while (l + 1 < r) {
		int m = (l + r) / 2;
		if (ok(m)) r = m;
		else l = m;
	}
	cout << r << endl;
}
