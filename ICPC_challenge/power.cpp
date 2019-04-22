#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1000000007;

int pos(int m, int n) {
	if (n == 0) {
		return 1;
	}
	else if (n % 2 == 0) {
		return pos((m * m) % MOD, n / 2) % MOD;
	}
	else if (n % 2 == 1) {
		return (pos((m * m) % MOD, n / 2) * m) % MOD;
	}
	return 0;
}


signed main() {
	int m, n;
	cin >> m >> n;

	cout << pos(m, n) % MOD << endl;
}
