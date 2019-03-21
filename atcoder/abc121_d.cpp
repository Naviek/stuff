#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int digit(ll n) {
	int cnt = 0;
	while (n >= 1) {
		n >>= 1;
		cnt++;
	}
	return cnt;
}

int bitToDec(string s) {
	int two = 2, num = 0;
	num += s[0];
	for (int i = 1; i < s.size(); ++i) {
		num += two * (int)s[i];
		two *= 2;
	}
	return num;
}

signed main() {
	int a, b;
	cin >> a >> b;

	int N = digit(b);

	string s;

	for (int i = 0; i < N; ++i) {
		int n = pow(2, i);
		int A = max(0, a - n);
		int B = max(0, b - n + 1);

		int b_ex = min(B % (2 * n), n);
		int a_ex = min(A % (2 * n), n);
		
		cout << A << ' ' << B << ' ' << a_ex << ' ' << b_ex << endl << endl;

		if ((abs(b_ex - a_ex) % 2 == 0)) {
			s += '0';
		}
		else {
			s += '1';
		}
	}

	cout << bitToDec(s) << endl;
}
