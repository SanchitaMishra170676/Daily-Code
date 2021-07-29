#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		ll n= str.length();
		ll c[27]={0};
		for(ll i=0; i<n;i++){
			ll as = (ll)str[i] - 97;
			if(c[as]<2)
			{
				c[as]++; 
			}
		}
			ll sum=0;
		for(ll i=0;i<27;i++){
				sum += c[i];
				// cout<<c[i]<<" "<<sum<<"\n";
		}
			// cout<<sum<<" ";
		cout<<sum/2<<"\n";
	}
} 



