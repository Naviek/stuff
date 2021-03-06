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
	init(100);
	cout << is_same_set(1, 3) << endl;
	unite(1, 2);
	cout << is_same_set(1, 3) << endl;
	unite(2, 3);
	cout << is_same_set(1, 3) << endl;
}
