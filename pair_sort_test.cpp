#include<bits/stdc++.h>
using namespace std;

signed main() {
	vector<pair<int, int>> p;
	
	int n, m;
	while (cin >> n >> m and n and m) {
		p.push_back(make_pair(n, m));
	}
	sort(p.begin(), p.end());

	for (auto e : p) cout << e.first << ' ' << e.second << endl;
}
