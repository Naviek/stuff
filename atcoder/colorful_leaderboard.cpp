#include<bits/stdc++.h>
using namespace std;

signed main() {
	int n, a, over = 0;
	cin >> n;
	vector<bool> color(8);
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a < 400) color[0] = true;
		else if (a < 800) color[1] = true;
		else if (a < 1200) color[2] = true;
		else if (a < 1600) color[3] = true;
		else if (a < 2000) color[4] = true;
		else if (a < 2400) color[5] = true;
		else if (a < 2800) color[6] = true;
		else if (a < 3200) color[7] = true;
		else over++;
	}

	int cnt = 0;

	for (int i = 0; i < 8; ++i) {
		if (color[i]) cnt++;
	}

	cout << max(1, cnt) << ' ' << cnt + over << endl;
}
