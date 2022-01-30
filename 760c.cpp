#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
		 ll ans1=v[0], ans2=v[1];
		 for(int i=2;i<n;i+=2){
		 	ans1= __gcd(ans1,v[i]);
		 	if(i+1<n)
		 	ans2=__gcd(ans2,v[i+1]);
		 }
		 // watch(ans1);
		 // watch(ans2);
		 ll i=1;
		 while(i<n){
		 	if(v[i]%ans1 == 0){
		 	ans1 =0;
		 	break;
		 	}
		 	i+=2;
		 }

		 i=0;
		 while(i<n){
		 	if(v[i]%ans2 == 0){
		 		ans2 =0;
		 		break;
		 	}
		 	i+=2;
		 }

		 cout<<max(ans1,ans2)<<"\n";

	}
} 