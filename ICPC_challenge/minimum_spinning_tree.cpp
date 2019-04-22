#include<bits/stdc++.h>
using namespace std;

int P[10010];
void init(int N) {
	for (int i = 0; i < N; ++i) P[i] = i;
}
int root(int a) {
	if (P[a] == a) return a;
	return P[a] = root(P[a]);
}
bool is_same_set(int a, int b) {
	return root(a) == root(b);
}
void unite(int a, int b) {
	P[root(a)] = root(b);
}

signed main() {
	int g;
	cin >> g;
	vector<pair<int, pair<int, int>>> a;
	int weight;

	init(g);

	for (int i = 0; i < g; ++i) {
		for (int j = 0; j < g; ++j) {
			cin >> weight;
			if (i > j and weight != -1) {
				a.push_back(make_pair(weight, make_pair(i, j)));
			}
		}
	}

	sort(a.begin(), a.end());

	int ans = 0;

	for (auto e : a) {
		//cout << e.first << ' ' << e.second.first << ' ' << e.second.second << endl;
		if (!is_same_set(e.second.first, e.second.second)) {
			unite(e.second.first, e.second.second);
			ans += e.first;
		}
		else {
			continue;
		}
	}
	cout << ans << endl;
}
