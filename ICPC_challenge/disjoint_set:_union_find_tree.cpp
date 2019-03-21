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
	int n, q;
	cin >> n >> q;

	init(n);
	
	for (int i = 0; i < q; ++i) {
		int com, x, y;
		cin >> com >> x >> y;

		if (com == 0) {
			unite(x, y);
		}
		else if (com == 1) {
			cout << is_same_set(x, y) << endl;
		}
	}
}
