#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
	int c[3][3];
	vector<int> a(3);
	vector<int> b(3);
	bool flag;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin >> c[i][j];
		}
	}

	for (int i = 0; i <= 100; ++i) {
		for (int j = 0; j <= 100; ++j) {
			for (int k = 0; k <= 100; ++k) {
				flag = true;
				a[0] = i;
				a[1] = j;
				a[2] = k;
				b[0] = c[0][0] - i;
				b[1] = c[1][1] - j;
				b[2] = c[2][2] - k;
				for (int n = 0; n < 3; ++n) {
					for (int m = 0; m < 3; ++m) {
						if (a[n] + b[m] != c[n][m]) {
							flag = false;
						}
					}
				}
				if (flag) {
					cout << "Yes" << endl;
					return 0;

				}
			}
		}
	}
	cout << "No" << endl;
}
