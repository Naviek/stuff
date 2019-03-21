#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
	ll n = 193127, m = 32134;
	while (n != m) {
		if (n > m) {
			m += 1584891;
		}
		else if (n < m) {
			n += 3438478;
		}
	}

	cout << n << endl;
}
