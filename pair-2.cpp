#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

// To print vector pair
void printvectorpair(vector<pair<ll,ll>> &v){
	ll n = v.size();
	for(int i=0;i<n;i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
} 

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	vector<ll> v;
	vector<pair<ll,ll>> p;
	while(t--){
		ll x;
		cin >>x;
		v.pb(x);
	}
	ll n = v.size();

	for(ll i=0; i<n/2;i++){
		p.pb({v[i],v[n-1-i]});
	} 

	if(n%2 != 0){
		p.pb({v[(n/2)],v[(n/2)]});
	}

	printvectorpair(p);
} 