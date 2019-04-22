#include <bits/stdc++.h>
using namespace std;

using P = pair<int, int>;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = 10000000;

signed main() {
	int t, n;

	while (cin >> t >> n and t != 0 and n != 0) {
		vector<vector<char>> cord(61, vector<char>(61, '.'));
		vector<vector<int>> d(61, vector<int>(61, INF));
		for (int i = 0; i < n; ++i) {
			int a, b;
			cin >> a >> b;
			cord[a + 30][b + 30] = '#';
		}

		int sx, sy;
		cin >> sx >> sy;

		sx += 30;
		sy += 30;

		queue<P> que;
		que.push(make_pair(sx, sy));
		d[sx][sy] = 0;
		int cnt = 0;

		while (que.size()) {
			P p = que.front();
			que.pop();
			
			for (int i = 0; i < 4; ++i) {
				int nx = p.first + dx[i], ny = p.second + dy[i];

				if (cord[nx][ny] != '#' and cord[nx][ny] != '@' and d[nx][ny] == INF) {
					que.push(make_pair(nx, ny));
					d[nx][ny] = d[p.first][p.second] + 1;
					if (d[nx][ny] <= t) cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}

