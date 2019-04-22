#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n;
	cin >> n;

	map<char, int> cnt;
	cnt['M'] = 0;
	cnt['A'] = 0;
	cnt['R'] = 0;
	cnt['C'] = 0;
	cnt['H'] = 0;

	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		cnt[s[0]]++;
	}
	
	int ans = 0;

	/*
	do {
		ans += cnt[march[0]] * cnt[march[1]] * cnt[march[2]];
		cout << cnt[march[0]] * cnt[march[1]] * cnt[march[2]];
	} while (next_permutation(march.begin(), march.end()));

	int num = bool(cnt[march[0]]) * bool(cnt[march[1]]) * bool(cnt[march[2]]) * bool(cnt[march[3]]) * bool(cnt[march[4]])
	*/

	ans += cnt['M'] * cnt['A'] * cnt['R'];
	ans += cnt['M'] * cnt['A'] * cnt['C'];
	ans += cnt['M'] * cnt['A'] * cnt['H'];
	ans += cnt['M'] * cnt['R'] * cnt['C'];
	ans += cnt['M'] * cnt['R'] * cnt['H'];
	ans += cnt['M'] * cnt['C'] * cnt['H'];
	ans += cnt['A'] * cnt['R'] * cnt['C'];
	ans += cnt['A'] * cnt['R'] * cnt['H'];
	ans += cnt['A'] * cnt['C'] * cnt['H'];
	ans += cnt['R'] * cnt['C'] * cnt['H'];

	cout << ans << endl;
}

