// Sort vecroe of pair of pair acc to 1st -> 2nd -> 3rd value respectively 
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

void generate(vector<ll> &v1, vector<ll> &v2, vector<ll> &v3,vector<pair<pair<ll,ll>, ll>> &p, ll n ){
	for(ll i=0; i<n; i++){
		p.pb({{v1[i],v2[i]},v3[i]});

		}
}

bool cmp(const pair<pair<ll,ll>, ll> &a, const pair<pair<ll,ll>, ll> &b){
	if (a.first.first == b.first.first){
		if(a.first.second == b.first.second){
			return (a.second < b.second);
		}
		return(a.first.second < b.first.second);
	}

	return (a.first.first < b.first.first);
}

void printnested (vector<pair<pair<ll,ll>, ll>> &p, ll n){
	for (ll i=0; i<n; i++){
		cout<<p[i].first.first<<" ";
	}
	cout<<"\n";
	for(ll i=0; i<n; i++){
		cout<<p[i].first.second<<" ";
	}
	cout<<"\n";
	for(ll i=0; i<n; i++){
		cout<<p[i].second<<" ";
	}
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	ll n=t;	
	vector<ll> v1, v2, v3;
	while(t--){
		ll x;
		cin>>x;
		v1.pb(x);
	}
	t=n;
	while(t--){
		ll x;
		cin>>x;
		v2.pb(x);
	}
	t=n; 
	while(t--){
		ll x;
		cin>>x;
		v3.pb(x);
	}

	vector<pair<pair<ll,ll>, ll>> p;

	generate(v1,v2,v3,p, n);
	sort(p.begin(), p.end(), cmp);
	printnested(p,n);

} 