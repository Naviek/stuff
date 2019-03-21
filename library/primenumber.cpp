#include "bits/stdc++.h"
using namespace std;
#include "library/sieve_of_eratosthenes.cpp"

int main() {
	long long n, p;
	cin >> n >> p;

	if ( n == 1 ) {
		cout << p << endl;
		return 0;
	}

	int i, lim = sqrt(p) + 1;
	
	vector<int> a(lim);
	for ( i = 0; i <= lim; i++ ) a[i] = 0;

	for ( i = 1; i <= p || i <= lim; i++ ) {
		if ( IsPrime(i) && p % i == 0 ) {
			p /= i;
			a[i]++;
			i--;
		}
	}

	int ans = 1;
	for ( int j = 1; j <= lim; j++ ) {
		if ( a[j] >= n ) {
			ans *= j * (a[j] / n);
		}
	}

	cout << ans << endl;
}

