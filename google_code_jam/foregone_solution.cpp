#include <bits/stdc++.h>
using namespace std;

signed main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		string a;
		cin >> a;
		for (int j = 1; j < stoi(a)/2 + 1; ++j) {
			string A = to_string(j), B = to_string(stoi(a) - j);
			if ((int)A.find("4") == -1 and (int)B.find("4") == -1) {
				cout << "Case #" << i + 1 << ": ";
				cout << j << ' ' << stoi(a) - j << endl;
				break;
			}
		}
	}
}
