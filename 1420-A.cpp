#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v;
		for(ll i=0;i<n;i++){
			ll x;
			cin>>x;
			v.pb(x);
		}
		ll ans=0;

		for(ll i=1;i<n;i++){
			if(v[i-1]>v[i]){
				ans++;
			}
		}

		if(ans == n-1){
			cout<<"NO"<<"\n";
		}
		else{
			cout<<"YES"<<"\n";
		}

	}
} 

