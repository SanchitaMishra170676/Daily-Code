#include <bits/stdc++.h>
#define ld long double
#define ll long long
using namespace std;
#define ff first
#define ss second

void sanchita() {
	ll n;
	cin >> n;
	map<ld, ll> mp;
	ll cnt = 0, dono = 0;
	for (int i = 0; i < n; i++) {
		ld x, y;
		cin >> x >> y;
		if (x == 0 && y == 0) {
			dono = 1;
			continue;
		}
		if (x == 0) {
			cnt++;
			continue;
		}
		ld a = y / x;
		mp[a]++;
	}

	ll ans = ((cnt) * (cnt - 1)) / 2;
	if (dono) ans += n - 1;
	for (auto it : mp) {
		if (it.second > 1) {
			ans += ((it.second) * (it.second - 1)) / 2;
		}
	}

	cout << ans << "\n";
}

int main(void) {
	ll t;
	cin >> t;
	while (t--) {
		sanchita();
	}
}