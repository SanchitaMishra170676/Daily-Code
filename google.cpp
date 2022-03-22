
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
	if (a.first == b.first)
		return b < a;
	return a < b;
}

int nge(vector<ll> arr, int n) {
	ll ans = 0;

	stack<ll> s;

	s.push(arr[0]);
	for (ll i = 1; i < n; i++) {
		if (s.empty()) {
			s.push(arr[i]);
			continue;
		}

		while (s.empty() == false && s.top() < arr[i]) {
			s.pop();
		}

		s.push(arr[i]);

	}

	while (s.empty() == false) {
		ans++;
		s.pop();
	}

	return ans;
}

// void funchita(void){

// }

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		/////
		ll n;
		cin >> n;
		vector<ll> v1, v2;
		for (int i = 0; i < n; i++) {
			ll x; cin >> x;
			v1.pb(x);
		}
		for (int i = 0; i < n; i++) {
			ll x; cin >> x;
			v2.pb(x);
		}
		vector<pair<ll, ll>> v;
		for (int i = 0; i < n; i++) {
			v.pb({v1[i], v2[i]});
		}
		sort(v.begin(), v.end(), cmp);

		for (int i = 0; i < n; i++) {
			v2[i] = v[i].second;
			// cout << v2[i] << " ";
		}

		int sub = nge(v2, n);
		// cout<<"ans= "<<sub<<" ";
		cout << sub << "\n";
		/////



	}

}

