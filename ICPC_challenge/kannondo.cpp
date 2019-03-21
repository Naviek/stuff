#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
	vector<int> a(128);
	int N;

	a[0] = 1;
	for (int i = 1; i <= 32; ++i) {
		a[i] = a[i-1];
		if (i >= 2) a[i] += a[i-2];
		if (i >= 3) a[i] += a[i-3];
	}
	
	while (cin >> N && N) {
		cout << ceil((double)a[N] / 3650) << endl;
	}
}
