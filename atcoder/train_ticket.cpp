#include<bits/stdc++.h>
using namespace std;

void func(string s, int i) {
	if (i == 7) {
		cout << s << endl;
		return;
	}
	s[i] = '+';
	func(s, i + 2);
	s[i] = '-';
	func(s, i + 2);
}


signed main() {
	string s;
	cin >> s;
	string a, b, c, d;
	a = s[0];
	b = s[1];
	c = s[2];
	d = s[3];
	s = a + "#" + b + "#" + c + "#" + d;

	func(s, 1);
}
