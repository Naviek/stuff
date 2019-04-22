#include<iostream>
#include<utility>
#include<vector>
using namespace std;

signed main() {
	vector<pair<int, char>> p;
	int n;
	char c;
	while (cin >> n >> c && c != '.') {
		p.push_back(make_pair(n, c));
	}
	sort(p.begin(), p.end());

	for (auto e : p) {
		cout << e.second;
	}
	cout << endl;
}
