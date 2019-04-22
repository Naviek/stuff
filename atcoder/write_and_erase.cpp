#include<bits/stdc++.h>
using namespace std;

signed main() {
	int n, a, cnt = 0;
	cin >> n;
	vector<bool> num(1000000010);
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (!num[a]) {
			cnt++;
			num[a] = true;
		}
		else {
			cnt--;
			num[a] = false;
		}
	}
	cout << cnt << endl;
}
