#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

ll sum(vector<ll> :: iterator begin, vector<ll> :: iterator end){
	ll sum=0;
	for( auto i = end-1; i!= begin-1; --i){
		sum+=*(i);
	}
	return sum;
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	vector<ll> v; 
	while(t--){
		ll x;
		cin>>x;
		v.pb(x);
	}
	cout<<sum(v.begin(),v.end());
} 
