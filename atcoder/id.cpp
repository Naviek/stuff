#include <bits/stdc++.h>
using namespace std;

signed main() {
	int n, m;
	cin >> n >> m;
	vector<tuple<int, int, int>> data(m);
	for (int i = 0; i < m; ++i) {
		int p, y;
		cin >> p >> y;
		data[i] = make_tuple(y, p, i);
	}
	
	sort(data.begin(), data.end());

	map<int, int> cnt;
	vector<tuple<int, int, int, int>> data2(m);

	for (int i = 0; i < m; ++i) {
		int p, y, num, c;
		y = get<0>(data[i]);
		p = get<1>(data[i]);
		num = get<2>(data[i]);

		data2[i] = make_tuple(y, p, num, ++cnt[p]);
	}

	vector<pair<int, int>> ans(m);

	for (int i = 0; i < m; ++i) {
		int p, y, num, c;
		y = get<0>(data2[i]);
		p = get<1>(data2[i]);
		num = get<2>(data2[i]);
		c = get<3>(data2[i]);

		//cout << y << ' ' << p << ' ' << num << ' ' << c << endl;

		ans[num] = make_pair(p, c);
	} 
		
	for (auto e : ans) {
		cout << setfill('0') << right << setw(6) << e.first;
		cout << setfill('0') << right << setw(6) << e.second << endl;
	}
}

