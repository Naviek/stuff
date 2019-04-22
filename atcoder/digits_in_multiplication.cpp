#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n;
	cin >> n;
	int N = sqrt(n) + 1;
	int a, b, ans = INT_MAX;
	for (int i = 1; i <= N; ++i) {
		a = i;
		b = n / i;
		if (a * b == n) {
			ans = min<int>(ans, max(to_string(a).size(), to_string(b).size()));
		}
	}

	cout << ans << endl;
}
