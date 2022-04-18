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


bool cmp(const pair<ll, pair<ll, ll>> &a,
         const pair<ll, pair<ll, ll>> &b)
{
	if (a.ff == b.ff)
		return a.ss.ss < b.ss.ss;
	return a.ff < b.ff;
}

signed main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	for (int z = 1; z <= t; z++) {
		int D, N, U;
		cin >> D >> N >> U;
		vector<pair<int, pair<int, int>>> leaves;

		for (int i = 0; i < D; i++) {
			ll m, l, e;
			cin >> m >> l >> e;
			leaves.pb({m, {l, e}});
		}

		sort(leaves.begin(), leaves.end(), cmp);

		vector<ll> orders(N);
		for (int i = 0; i < N; i++) {
			cin >> orders[i];
		}

		sort(orders.begin(), orders.end());

		int ans = 0;

		int i = 0, j = 0, l = 0;
		while (i < N) {
			if (leaves[j].ff)
			}

	}

}