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
	int n, m;
	cin >> n >> m;

	init(n);
	vector<int> a(m), b(m);

	for (int i = 0; i < m; ++i) {
		cin >> a[i] >> b[i];
	}

	for (int i = m; i >= 0; --i) {
		unite(a[i], b[i]);
	}
}
