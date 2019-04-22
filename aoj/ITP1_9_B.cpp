#include <bits/stdc++.h>
using namespace std;

signed main() {
	string s;
	while (cin >> s and s != "-") {
		queue<char> a;
		for (int i = 0; i < s.size(); ++i) {
			a.push(s[i]);
		}
		int N;
		cin >> N;
		for (int i = 0; i < N; ++i) {
			int h;
			cin >> h;
			for (int j = 0; j < h; ++j) {
				a.push(a.front());
				a.pop();
			}
		}
		while (!a.empty()) {
			cout << a.front();
			a.pop();
		}
		cout << endl;
	}
}


