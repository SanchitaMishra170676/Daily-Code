#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

void printvector(ll v[], ll n){
	// ll n = sizeof(v)/sizeof(v[0]);
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
} 

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		ll pk[n];
		ll prefix[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		pk[0]=0;pk[n-1]=0;
		for(ll i=0;i<n-1;i++){
			if(arr[i]> arr[i-1] && arr[i] > arr[i+1]){
				pk[i]=1;
			} 
			else{
				pk[i]=0;
			}
		}
		prefix[0]=0;
		for(ll i=1;i<n;i++){
				prefix[i]= prefix[i-1]+pk[i];
		}

		ll max_cnt = INT_MIN;
		ll cnt=0;
		ll index=-1;
		// printvector(pk,n);
		// printvector(prefix,n);
			for(ll i=0; i<n-k+1;i++){

					cnt = prefix[i+k-2]-prefix[i];
						// cout<<"i= "<<i<<"cnt= "<<cnt<<"\n";
					if(cnt > max_cnt){
						max_cnt = cnt;
						index= i+1; 
					}

			}

		cout<<max_cnt+1<<" "<<index<<"\n";

	}
} 

