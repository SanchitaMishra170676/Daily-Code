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
		ll d,x,y,z;
		cin>>d>>x>>y>>z;
		ll w1= x*7;
		ll w2 = (y*d)+(z*(7-d));
		cout<<max(w1,w2)<<"\n";
	}
} 