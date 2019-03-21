#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
	int n;
	cin >> n;
	vector<int> l(n);
	for (int i = 0; i < n; i++) {
		cin >> l[i];
	}

	auto it = max_element(l.begin(), l.end());

	int lmax = l[it - l.begin()], lsum = accumulate(l.begin(), l.end(), 0);

	if (lmax < lsum - lmax) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}
