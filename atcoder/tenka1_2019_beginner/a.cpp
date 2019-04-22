#include <bits/stdc++.h>
using namespace std;

signed main() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a < c and c < b) or (b < c and c < a)) cout << "Yes" << endl;
	else cout << "No" << endl;
}	
