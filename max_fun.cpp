// https://www.codechef.com/problems/MAXFUN
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
		ll ma = INT_MIN, mi= INT_MAX;
		while(n--){
			ll x;
			cin>>x;
			if(ma < x){
				ma=x;
			}
			if(mi>x){
				mi=x;
			}
		}

		cout<<2*(ma-mi)<<"\n";
	}
} 

