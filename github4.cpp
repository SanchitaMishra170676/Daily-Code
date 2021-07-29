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
	vector<ll> sequence[n];
	for(ll i=0;i<n;i++){
		ll temp;
		cin>>temp;
		sequence[i].push_back(temp);
	}
	
// Pre calculating XOR
	for (ll i =0;i<n-1;i++){
		for(ll j=i+1; j<n;j++){
			ll temp = sequence[i][0] ^ sequence[j][0];
			sequence[i].push_back(sequence[i][0] ^ sequence[j][0]);

		}
	}

	ll q;
	cin>>q;

	while(q--){
		ll l,r;
		cin>>l>>r;
		ll res=1;
		
		for(ll i=l-1; i<r-1; i++){
			for(ll j=1; j<= r-i-1;j++){

				res = (res* sequence[i][j]) % mod;
				
			}
		}
		cout<<res<<"\n";
	}
}


	