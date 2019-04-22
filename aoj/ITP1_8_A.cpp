#include <bits/stdc++.h>
using namespace std;

signed main() {
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); ++i) {
		if ('a' <= s[i] and s[i] <= 'z') {
			s[i] -= 32;
		}
		else if ('A' <= s[i] and s[i] <= 'Z') {
			s[i] += 32;
		}
	}

	cout << s << endl;
}
