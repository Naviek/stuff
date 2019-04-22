#include <bits/stdc++.h>
using namespace std;

signed main() {
	int n;
	string s;
	cin >> n >> s;
	int cnt = 0;

	// "#." is NG
	// ###..##...##### n = 15 sharp = 5
	// ###.. ##... #... ###. #. ##... ###..... #####
	// ###..##...#...###.#.##...###.....#####
	//
	//
	// sharp = 5, dot = 5

	if (n == 1) {
		cout << 0 << endl;
		return 0;
	}

	vector<int> sharp, dot;
	sharp.push_back(0);
	dot.push_back(0);

	int vecnum = 0;
	
	for (int i = 0; i < n; ++i) {
		if (i > 0 and s[i] == '#' and s[i - 1] == '.') {
			vecnum++;
			sharp.push_back(0);
			dot.push_back(0);
		}
		if (s[i] == '#') sharp[vecnum]++;
		if (s[i] == '.') dot[vecnum]++;
	}

	int N = sharp.size();
	vector<int> diff(N);

	for (int i = 0; i < N; ++i) {
		diff[i] = dot[i] - sharp[i];
	}

	reverse(diff.begin(), diff.end());

	int sum = accumulate(sharp.begin(), sharp.end(), 0);
	int ans = sum;

	for (int i = 0; i < N; ++i) {
		ans = min(ans, sum + diff[i]);
		sum += diff[i];

	}


	cout << ans << endl;

	/*
	for (auto e : sharp) cout << e << ' ';
	cout << endl;
	for (auto e : dot) cout << e << ' ';
	cout << endl;
	*/

}
