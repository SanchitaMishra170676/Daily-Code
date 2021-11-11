// https://mycode.prepbytes.com/problems/sorting/SUPES
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
		ll maxi= INT_MIN;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]>maxi){
				maxi=arr[i];
			}
		}
		set<ll> st;
		st.insert(arr,arr+n);
		ll sum = (maxi*(maxi+1))/2;
		ll suma=0;
		for(auto it: st){
				suma+=it;
		}
		if(suma==sum){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}

	}
} 