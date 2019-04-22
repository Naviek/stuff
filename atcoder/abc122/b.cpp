#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
	int n;
	string s;
	cin >> s;
	int cnt = 0, ans = 0;


	for (int i = 0; i < s.size(); ++i) {
		char c = s[i];
		if (c == 'A' or c == 'T' or c == 'C' or c == 'G') {
			cnt++;
		}
		else {
			ans = max(ans, cnt);
			cnt = 0;
		}
	}

	ans = max(ans, cnt);
	cout << ans << endl;

}
