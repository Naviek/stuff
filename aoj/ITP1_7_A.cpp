#include <bits/stdc++.h>
using namespace std;

signed main() {
	int m, f, r;
	char grade;
	while (cin >> m >> f >> r and (m > -1 or f > -1 or r > -1)) {
		if (m == -1 or f == -1) grade = 'F';
		else if (m + f >= 80) grade = 'A';
		else if (m + f >= 65) grade = 'B';
		else if (m + f >= 50 or r >= 50) grade = 'C';
		else if (m + f >= 30) grade = 'D';
		else grade = 'F';

		cout << grade << endl;
	}
}
