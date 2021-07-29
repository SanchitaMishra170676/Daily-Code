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
		ll n;
		cin>>n;
		ll k = n/3;
		ll rem = n%3;
		ll c1=k, c2=k;
		if(rem == 1){
			c1++;
		}
		if(rem == 2){
			c2++;
		}
		cout<<c1<<" "<<c2<<"\n";
	}
} 

