#include <bits/stdc++.h>
using namespace std;

signed main() {
	int r, c;
	cin >> r >> c;

	vector<vector<int>> fig(r, vector<int>(c));

	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> fig[i][j];
		}
	}

	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << fig[i][j] << ' ';
		}
		cout << accumulate(fig[i].begin(), fig[i].end(), 0) << endl;
	}

	int ssum = 0;

	for (int i = 0; i < c; ++i) {
		int sum = 0;
		for (int j = 0; j < r; ++j) {
			sum += fig[j][i];
		}
		cout << sum << ' ';
		ssum += sum;
	}
	
	cout << ssum << endl;
}
			


