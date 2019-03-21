#include<bits/stdc++.h>
using namespace std;

signed main() {
	string s;
	priority_queue<int> q;
	int n;
	while (cin >> s and s != "end") {
		if (s == "insert") {
			cin >> n;
			q.push(n);
		}
		else if (s == "extract") {
			cout << q.top() << endl;
			q.pop();
		}	
	}
}

