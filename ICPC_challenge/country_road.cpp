#include <bits/stdc++.h>
using namespace std;

int min_length(vector<int> x, int k) {
	int n = x.size();
	vector<int> dif(n);

	for (int i = 0; i < n - 1; i++) {
		dif[i] = x[i + 1] - x[i];
	}

	sort(dif.begin(), dif.end());
	int all_length = x.back() - x.front();
	reverse(dif.begin(), dif.end());
	int unnecessary = 0;

	for (int i = 0; i < k - 1; i++) {
		unnecessary += dif[i];
	}
	return all_length - unnecessary;
}

int main() {
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		int n, k;
		cin >> n >> k;
		vector<int> x(n);

		for (int i = 0; i < n; i++) {
			cin >> x[i];
		}

		if (n <= k) cout << 0 << endl;
		else cout << min_length(x, k) << endl;
	}
}
