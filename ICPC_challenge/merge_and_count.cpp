#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a(INT_MAX) w(INT_MAX);

int merge_and_count(int l, int r) {
	if (l + 1 >= r) return 0;
	if (l + 2 == r) {
		if (a[l] <= a[l + 1]) return 0;
		swap(a[l], a[l + 1]);
		return 1;
	}
	int m = (l + r) / 2;
	int cl = merge_and_count(l, m);
	int cr = merge_and_count(m, r);
	int c = 0;
	int i = 1, j = m;

signed main() {

}
