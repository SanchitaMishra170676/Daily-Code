#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

ll sumarray(ll arr[], ll n){
	ll sum = 0;
	for(ll i=0;i<n;i++){
		sum += arr[i];
	}
	return sum;
}

void gcdarray(ll arr[],ll g[], ll n){
	ll f[n], b[n];

	f[0]=arr[0];
	for(ll i=1; i<n;i++){
		f[i] = __gcd(f[i-1],arr[i]);
	}

	b[n-1]= arr[n-1];
	for(ll i= n-2;i>=0;i--){
		b[i] = __gcd(arr[i],b[i+1]);
	}

	g[0]=b[1]; 
	g[n-1]=f[n-2];

	for(ll i=1;i<n-1;i++){
		g[i]= __gcd(f[i-1],b[i+1]);
	}

}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		ll g[n];
		for (ll i=0; i<n;i++){
			cin>>arr[i];
		}

		ll sum = sumarray(arr,n);
		gcdarray(arr,g,n);

		ll m = LONG_MAX;


		for(ll i=0; i<n;i++){
			ll ans = ((sum-arr[i])/g[i])+1;
			m = min(ans,m);
		}

		cout<<m<<"\n";
	}
} 