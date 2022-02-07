#include <bits/stdc++.h>
#define ll long long
#define pb push_back 
#define int long long
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	vector<ll>v;
	while(t--){
		ll x;
		cin>>x;
		v.pb(x);
	}
	ll maxi=*max_element(v.begin(),v.end());
	ll mini=*min_element(v.begin(),v.end());
	cout<<"minimum element= "<<mini<<"\n"<<"max element= "<<maxi;

} 