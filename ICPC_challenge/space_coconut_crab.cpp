#include <bits/stdc++.h>
using namespace std;

int e;
const int max_e = 2000000;

signed main() {
	while (cin >> e && e > 0) {
		int ans = max_e;
		for (int z = 0; pow(z, 3) <= e; ++z) {
			for (int y = 0; y*y <= e - z*z*z; ++y) {
				int x = e - z*z*z - y*y;
				int eTemp = x + y + z;
				ans = min(ans, eTemp);
			}
		}
	cout << ans << endl;
	}
}


