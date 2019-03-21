int gcd(int i, int j) {
	int swap = min(i, j);
	i = max(i, j);
	j = swap;
	int r;

	while (true) {
		r = i % j;
		if ( r == 0 ) break;
		i = j;
		j = r;
	}

	return j;
}
