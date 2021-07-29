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
		vector<vector<ll>> v (n);

		for(ll i=0;i<n;i++){
			for(ll j=0;j<5;j++){
				ll x;
				cin>>x;
				v[i].pb(x);
			}
		}
		 vector<ll> flag (n,1); 

		for(ll i=0; i<n; i++){
				// cout<<flag[i]<<" ";
			// if(flag[i] == 0){
			// 	continue;
			// }
			for(ll j=i+1;j<n;j++){
						ll cnt=0;
					for(ll k=0; k<5; k++){		
							if (v[i][k] < v[j][k]){
								cnt++;
							}
					}

					if(cnt>=3){
						// flag[i] =1;
						flag[j]=0; 
					}		
					else{ 
						flag[i]=0;
						// flag[j]=1;
					}
			}

			// cout<<flag[i]<<" ";	
			// if(flag[i] == 1){
			// 	break;
			// }
		}
			ll ans=-1;
			for(ll i=0; i<n;i++){ 
				if(flag[i] == 1){
						ans= i+1;
						break;
				}
			}

			cout<<ans<<"\n";

	}
} 

