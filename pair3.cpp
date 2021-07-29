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
		cout<<v[i].first<<" "<<v[i].second<<" ";
	}
	cout<<"\n";
} 


void corresponding(vector<ll> &a1, vector<ll> &a2, vector<pair<ll,ll>> &p){
	ll n = a1.size();
	for(ll i=0;i<n;i++){
		p.pb({a1[i],a2[i]});
	}	
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll n2=n;
		vector<ll> a1,a2;
		vector<pair<ll,ll>> p;
		while(n--){
			ll x;
			cin>>x;
			a1.pb(x);
		}
		n=n2;
		while(n--){
			ll x;
			cin>>x;
			a2.pb(x);
		}

		corresponding(a1,a2,p);
		printvectorpair(p);
	}
} 