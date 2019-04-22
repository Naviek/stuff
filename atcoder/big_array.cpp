#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		k -= b;
		if (k <= 0) {
			cout << a << endl;
			return 0;
		}
	}
}

