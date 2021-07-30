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
		ll i=1;
		while(n>0){
			ll rem = n%10;
			if(rem != 0){
				rem= rem*i;
				v.pb(rem);
			}
			i*=10;
			n/=10;
		}

		ll p=v.size();
		cout<<p<<"\n";
		for(ll i=0; i<p;i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";

	}
} 