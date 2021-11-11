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
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		map<ll,ll> mp;
		for(ll i=0;i<n;i++){
			mp[arr[i]]++;
		}
		ll sum=0;
		for(auto it: mp){
			sum+=(it.second*(n-it.second));
		}
		cout<<sum<<"\n";
	}
} 