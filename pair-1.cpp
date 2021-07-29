#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

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
	vector<pair<ll,ll>> v;
	while(t--){
		ll l,r;
		cin>>l>>r;
		v.pb({l,r});
	}
	printvector(v);
}