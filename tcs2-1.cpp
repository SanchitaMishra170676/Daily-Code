#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
#define ff first
#define ss second
#define pi 3.14159265358979323846
using namespace std;

bool fun(vector<int> &v, int i, int dis, int l, bool r, string dir) {
	cout << l << " ";
	if (l == dis || l == -1 * dis || r) return true;

	if (i < (ll) v.size() ) {
		r = fun(v, i + 1, dis, l + v[i], r, dir);
		r = fun(v, i + 1, dis, l - v[i], r, dir);
	}

	return r;
}

signed main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin >> n;
	ll dis;
	cin >> dis;
	string dir;
	cin >> dir;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	if (fun(v, 0, dis, 0, 0, dir)) {
		cout << "Possible";
	}
	else {
		cout << "Not Possible";
	}
}
