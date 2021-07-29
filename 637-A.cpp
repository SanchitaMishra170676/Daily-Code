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
		ll n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;
		bool ans=true;
		ll s= (a-b)*n;
		ll e= (a+b)*n;
		ll cs= c-d;
		ll ce= c+d;
		if(e<cs || ce<s){
			ans=false;
		}

		if(ans){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
} 

