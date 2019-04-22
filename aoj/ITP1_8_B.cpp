#include <bits/stdc++.h>
using namespace std;

signed main() {
	string s;
	while (cin >> s and s != "0") {
		int sum = 0;
		for (int i = 0; i < s.size(); ++i) {
			sum += s[i] - '0';
		}
		cout << sum << endl;
	}
}
