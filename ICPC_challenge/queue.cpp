#include<bits/stdc++.h>
using namespace std;

typedef pair<string, int> P;

signed main() {
	int n, q;
	cin >> n >> q;
	queue<P> que;

	for (int i = 0; i < n; ++i) {
		string name;
		int time;
		cin >> name >> time;
		que.push(make_pair(name, time));
	}

	int cnt = 0;

	while (!que.empty()) {
		if (que.front().second > q) {
			que.front().second -= q;
			que.push(que.front());
			que.pop();
			cnt += q;
		}
		else {
			cnt += que.front().second;
			cout << que.front().first << ' ' << cnt << endl;
			que.pop();
		}
	}
}
