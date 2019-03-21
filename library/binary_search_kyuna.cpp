#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(vector<int> a) {
    return true;
}

ll binary_search(ll ok, ll ng) {
    assert(check(ok) == true);
    assert(check(ng) == false);
    while (abs(ng - ok) > 1) {
        ll mid = (ng + ok) / 2;
        (check(mid) ? ok : ng) = mid;
    }
    return ok;
}

signed main() {
    ll ok = 100000 * 10000;
    ll ng = 0;
}
