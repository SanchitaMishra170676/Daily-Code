// Maximimum among left- greater than all elements to the left.

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

void maximum_from_left(vector<ll> &v){
	ll n = v.size();
	if (v.size() == 0)
		return;
	ll max= v[0];
	for (ll i=1; i<n;i++){
		if(v[i] > max){
			cout<<i<<" ";
			max=v[i];
		}
	}
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	vector<ll> v;
	while(t--){ 
		ll x;
		cin>>x;
		v.pb(x);
	}
	maximum_from_left(v);
} 