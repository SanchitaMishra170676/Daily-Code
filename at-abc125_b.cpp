#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; 
	cin>>n;
	vector<ll> v,e;
	for(ll i=0;i<n;i++){
		ll x;
		cin>>x;
		v.pb(x);
		e.pb(x);
	}
	ll cnt=0;
	
	sort(v.begin(),v.end());
	for(ll i=0;i<n;i++){
		if(v[i] != e[i]){
			cnt++;
		}
	}

	if(cnt == 2 || cnt ==0){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}


} 