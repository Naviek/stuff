#include <bits/stdc++.h>
using namespace std;

signed main() {
	int n, x, cnt = 0;
	while (cin >> n >> x and n) {
		cnt = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				for (int k = 1; k <= n; ++k) {
					if (i < j and j < k and i + j + k == x) cnt++;
				}
			}
		}
	cout << cnt << endl;
	}
}
