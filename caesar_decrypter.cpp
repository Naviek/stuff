#include<bits/stdc++.h>
using namespace std;

int lower(int n) {
	if (n > 122) {
		n -= 26;
	}
	return n;
}

int upper(int n) {
	if (n > 90) {
		n -= 26;
	}
	return n;
}

string caesar(string s, int n) {
	for (int i = 0; i < s.size(); ++i) {
		if ('a' <= s[i] and s[i] <= 'z') {
			//s[i] = lower((int)s[i] + n);
			s[i] = (int)n <= 122 ? n : n - 26;
		}
		if ('A' <= s[i] and s[i] <= 'Z') {
			//s[i] = upper((int)s[i] + n);
			s[i] = (int)n <= 90 ? n : n - 26;
		}
	}
	return s;
}

signed main() {
	string s;
	getline(cin, s);

	for (int i = 1; i <= 26; ++i) {
		cout << caesar(s, i) << endl << endl;
	}
}
