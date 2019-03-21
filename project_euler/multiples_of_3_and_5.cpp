#include<bits/stdc++.h>
using namespace std;

signed main() {
	const int n = 1000;
	long long three = 0, five = 0, fif = 0;

	for (int i = 1; i < n; ++i) {
		if (i % 3 == 0) three += i;
		else if (i % 5 == 0) five += i;
	}

	long long ans = three + five;

	cout << ans << endl;
}
