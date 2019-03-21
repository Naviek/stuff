#include<bits/stdc++.h>
using namespace std;

vector<bool> eratosthenes(int n) {
	vector<bool> primeNumberCheck(n + 1, true);
	primeNumberCheck.at(1) = false;

	for (int k = 2; k <= sqrt(n) + 1; k++ ) {
		if ( primeNumberCheck[k] == false ) continue;
		for ( int i = 2; i * k <= n; i++ ) {
			primeNumberCheck[i * k] = false;
		}
	}

	return primeNumberCheck;
}

signed main() {
	int n = 2000000;
	long long sum = 0;
	vector<bool> sieves = eratosthenes(n);

	for (int i = 2; i < n; ++i) {
		if (sieves[i] == true) sum += i;
	}

	cout << sum << endl;
}
