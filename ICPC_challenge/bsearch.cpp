#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool bsearch(const int array[], int left, int right, int value) {
	while (left + 1 < right) {
		int med = (left + right) / 2;
		if (array[med] > value) right = med;
		else left = med;
	}
	return array[left] == value;
}

signed main() {
	int n, s[100010], q, t, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> s[i];
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> t;
		if (bsearch(s, 0, n, t)) cnt++;
	}

	cout << cnt << endl;
}

