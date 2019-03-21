#include <bits/stdc++.h>
using namespace std;

bool is_sequence(int i, int j, int k) {
	return j == i + 1 && k == j + 1;
}

bool is_same_number(int i, int j, int k) {
	return i == j && j == k;
}

bool is_good_set(int i, int j, int k) {
	return is_sequence(i, j, k) || is_same_number(i, j, k);
}

bool is_all_good_set(vector<int> v) {
	return is_good_set(v[0], v[1], v[2]) && is_good_set(v[3], v[4], v[5]) && is_good_set(v[6], v[7], v[8]);
}

int win(vector<int> v) {
	sort(v.begin(), v.end());

	do {
		if (is_all_good_set(v)) {
			return 1;
		}
	} while (next_permutation(v.begin(), v.end()));

	return 0;
}

signed main() {
	int t;
	vector<int> card(9);
	cin >> t;
	vector<int> res(t);

	for (int j = 0; j < t; j++) {
		for (int i = 0; i < 9; i++) {
			cin >> card[i];
		}

		for (int i = 0; i < 9; i++) {
			char s;
			cin >> s;
			if (s == 'R') card[i] += 10;
			else if (s == 'G') card[i] += 20;
			else if (s == 'B') card[i] += 30;
		}

		res[j] = win(card);
	}

	for (auto e:res) cout << e << endl;
}


