#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;
ll nsum(ll n){
	return (n*(n+1))/2;
}
signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> a,b;
		for(ll i=0;i<n;i++){
			ll x;
			cin>>x;
			a.pb(x);
		}
		for(ll i=0;i<n;i++){
			ll x;
			cin>>x;
			b.pb(x);
		}

		ll p=a[0]-b[0]+1;
		ll ans= nsum(b[0]);
		ll prev=ans;
		for(ll i=1; i< n;i++){
			ll a1;
			if(a[i]-a[i-1]>=b[i])
				a1= nsum(b[i]);
			else
				a1=INT_MAX;

			ll a2= nsum(a[i]-p+1);
			watch(a1);
			watch(a2);
			if(a1<a2){
				ans+=a1;
				prev=a1;
				p=a[i]-b[i]+1;
			}
			else{
				ans+=a2-prev;
				prev=a2;
			}
		}
			cout<<ans<<"\n";

	}
} 