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
		ll n,k;
		cin>>n>>k;
		ll arr[n];

		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}

		ll sum[33]={0};
		for (ll i=0;i<n;i++){
			ll x= arr[i], j=32;

			while(x>0){
				sum[j]= sum[j]+ x%2;
				j--;
				x=x/2;
			}
		}

		ll ans=0;
		for (ll i=0;i<33;i++){
			if(sum[i]%k == 0){
				ans+= sum[i]/k;
			}

			else{
				ans+= (sum[i]/k)+1;
			}
			
		}	

		cout<<ans<<"\n";
	}
} 