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
		ll maxi=INT_MIN, mini=INT_MAX;
		while(n--){
			ll x; cin>>x;
			if(x>maxi)
				maxi=x;
			if(x<mini)
				mini=x;
		}
		cout<<maxi-mini<<"\n";

	}
} 