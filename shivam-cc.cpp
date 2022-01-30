#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;


void reff(ll arr[], ll reff, ll s){
	ll n = s-1;
		
		ll mid;

		if (n % 2 == 0) { // even
			mid = n / 2;
		} else {
			mid = (n + 1) / 2;
		}


		for(ll i=2;i<n;i++) {
			ll cnt=reff;
			ll index=i;
			while(cnt>0) {
				
				if(index%2==0) {
					
					index=mid+(index/2);
					
				}else {
					index=(index+1)/2;
				}
				
				
				cnt--;
			}
			
			
			arr[index]=i;
			
		}

		for(ll i=1;i<s;i++) {
			cout<<arr[i]<<" ";
		}
}


signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;

		ll rcnt = 0;

			ll ci = 2;
			ll mid;

			if (n % 2 == 0) { // even
				mid = n / 2;
			} else {
				mid = (n + 1) / 2;
			}

			do {
				
				if(ci%2==0) {
					ci = (ci / 2) + mid;
				}else {
					ci = (ci + 1) / 2;
				}
				rcnt++;
			}while (ci != 2);


			ll actualreff = k % rcnt;

			ll arr[n+1];
			
			arr[1]=1;
			arr[n]=n;

			reff(arr,actualreff,n+1);
			cout<<"\n";

	}
} 