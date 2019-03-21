#include<iostream>
#include<vector>
using namespace std;

signed main() {
	int t, n;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> n;
		vector<int> P(10010, -1);
		for (int j = 0; j < n - 1; ++j) {
			int p, c;
			cin >> p >> c;
			P[c] = p;
		}
		int a, b;
		cin >> a >> b;

		vector<int> A, B;

		A.push_back(a);
		while (P[a] != -1) {
			A.push_back(P[a]);
			a = P[a];
		}

		B.push_back(b);
		while (P[b] != -1) {
			B.push_back(P[b]);
			b = P[b];
		}

		bool flag = true;
		for (int i = 0; i < A.size() && flag; ++i) {
			for (int j = 0; j < B.size(); ++j) {
				if (A[i] == B[j]) {
					cout << A[i] << endl;
					flag = false;
					break;
				}
			}
		}
	}
}
