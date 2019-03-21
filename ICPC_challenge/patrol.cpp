#include<bits/stdc++.h>
using namespace std;

bool eularCheck(vector<int> degree) {
	bool flag = true;
	if (degree[1] % 2 == 0 or degree[2] % 2 == 0) flag = false;
	for (int i = 3; i < degree.size(); ++i) {
		if (degree[i] % 2 == 1) flag = false;
	}
	return flag;
}



signed main() {
	int a, b;
	vector<int> degree(110);

	while (cin >> a >> b) {
		degree[a]++;
		degree[b]++;
		if (a == 0) {
			if (eularCheck(degree)) {
				cout << "OK" << endl;
			}
			else {
				cout << "NG" << endl;
			}
			for (int i = 0; i < degree.size(); ++i) {
				degree[i] = 0;
			}
		}
	}
}
