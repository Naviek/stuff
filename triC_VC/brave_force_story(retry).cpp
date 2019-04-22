#include <bits/stdc++.h>
using namespace std;

const int INF = 100000000;
using P = pair<int, int>;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

signed main() {
	int t, n;

	while (cin >> t >> n and t != 0 and n != 0) {
		char maze[61][61];
		int d[61][61];
		int sx, sy;

		for (int i = 0; i < n; ++i) {
			int a, b;
			cin >> a >> b;
			a += 30;
			b += 30;
			maze[a][b] = '#';
		}

		cin >> sx >> sy;
		sx += 30;
		sy += 30;

		queue<P> que;
		que.push(make_pair(sx, sy));
		for (int i = 0; i < 61; ++i) {
			for (int j = 0; j < 61; ++j) {
				d[i][j] = INF;
			}
		}

		d[sx][sy] = 0;
		int cnt = 0;

		while (que.size()) {
			P p = que.front();
			que.pop();
			
			for (int i = 0; i < 4; ++i) {
				int nx = p.first + dx[i], ny = p.second + dy[i];

				if (0 <= nx and nx < 61 and 0 <= ny and ny < 61 and maze[nx][ny] != '#' and d[nx][ny] == INF) {
					que.push(make_pair(nx, ny));
					d[nx][ny] = d[p.first][p.second] + 1;
					if (d[nx][ny] <= t) cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}

