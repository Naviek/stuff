#include<bits/stdc++.h>
using namespace std;

bool bsearch(const int array[], int left, int right, int value) {
	while (left + 1 < right) {
		int med = (left + right) / 2;
		if (array[med] > value) right = med;
		else left = med;
	}
	return left < right and array[left] == value;
}

signed main() {
	int a[]= {5, 7, 8, 4, 5, 1, 9, 5, 3, 8, 0, 4, 9};
	cout << bsearch(a, 10, 5, 5) << endl;
}
