#include<bits/stdc++.h>
using namespace std;

char word[10];
stack<int> S;
int n, m;

void operandInsert() {
	n = S.top();
	S.pop();
	m = S.top();
	S.pop();
}


signed main() {
	while (cin >> word) {
		if (word[0] == '+') {
			operandInsert();
			S.push(n + m);
		}
		else if (word[0] == '-') {
			operandInsert();
			S.push(m - n);
		}
		else if (word[0] == '*') {
			operandInsert();
			S.push(n * m);
		}
		else {
			S.push(stoi(word));
		}
	}
	cout << S.top() << endl;
}

