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
		ll op[n]={0};
		ll c[n+2]={0};
		for(ll i=0;i<n;i++){
			ll x; 
			cin>>x;
			arr[i] = x;
			if(c[x]<k){
				c[x]++;
			}
		}

		ll sum=0;
		for(ll i=0;i<n+2;i++){
			sum+= c[i];
		}

		ll grpel = sum/k;


	for(ll z=1; z<=k;z++){
				ll tr[n+2]={0};
				ll j=0;
		for(ll i=1; i<=grpel; i++){
				
				for(;j<n;){
					ll x= arr[j];
					if(tr[x] != 1 && op[j] == 0 ){
						op[j]=z;
						tr[x]=1;
						break;
					}
					j++;
				}
		}	
	}

		

		for(ll i=0;i<n;i++){
			cout<<op[i]<<" ";
		}

		cout<<"\n";


	}
} 

