// https://cses.fi/problemset/task/1662/
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; 
	cin>>n;
	vector<ll> v;
	vector<ll> pre;
	pre.pb(0);
	for(ll i=0; i<n;i++){
		ll x;
		cin>>x;
		v.pb(x%n);	
		pre.pb((pre[i]+v[i])%n);
		pre[i+1]= (pre[i+1]+n)%n;
	}
	map<ll,ll> m;
	ll cnt=0;
	for (ll i=0;i<n+1;i++){
		cnt+=m[pre[i]];
		m[pre[i]]++;
	}
	cout<<cnt;
} 