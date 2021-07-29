#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

void iter(vector<ll> :: iterator begin, vector<ll> :: iterator end){
	for( auto i = begin; i!= end; ++i){
		cout<<*(i)<<" ";
	}
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
	iter(v.begin(),v.end());
} 
