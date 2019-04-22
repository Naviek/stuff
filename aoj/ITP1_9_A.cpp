#include <bits/stdc++.h>
using namespace std;

string lowerize(string s) {
	for (int i = 0; i < s.size(); ++i) {
		if (isupper(s[i])) s[i] = tolower(s[i]);
	}
	return s;
}

signed main() {
	string s, w;
	cin >> w;
	w = lowerize(w);
	int cnt = 0;
	while (cin >> s and s != "END_OF_TEXT") {
		s = lowerize(s);
		if (s == w) cnt++;
	}
	cout << cnt << endl;
}
