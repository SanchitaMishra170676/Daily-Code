#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
#define ff first
#define ss second
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;
ll memory = 0, tim = 0, ttt = 0;
#ifndef ONLINE_JUDGE
#define cout if(++memory && memory>210000){cout<<"\nOUT OF MEMORY";exit(0);}else cout
#define ttt {tim++;if(tim>450000000){cout<<"\nEXIT INFINTY LOOP";exit(0);}}
#endif




signed main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	for (int z = 1; z <= t ; z++ ) {
		int n; cin >> n;
		vector<vector<char>> v(2 * n, vector<char> (2 * n));
		ll t = 0, b = 0, l = 0, r = 0;
		for (int i = 0; i < 2 * n; i++) {
			for (int j = 0; j < 2 * n; j++) {
				cin >> v[i][j];

				if (v[i][j] == 'I') {
					if (i < n) t++;
					else b++;

					if (j < n) l++;
					else r++;
				}
			}
		}

		ll tb = max(t, b) - min(t, b);
		ll lr = max(l, r) - min(l, r);

		ll ans = 0;
		ll maxi = max(tb, lr);
		ll mini = min(tb, lr);

		ans += maxi;
		maxi = maxi - mini;
		if (maxi % 2 != 0) ans++;

		cout << "Case #" << z << ": " << ans << "\n";


	}

}