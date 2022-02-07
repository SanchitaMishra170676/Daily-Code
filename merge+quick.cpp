#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;




void merges(vector<ll> v, int s, int e){
	if(s>=e)
		return;
	ll mid=(s+e)/2;
	
}


signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	vector<ll> v;
	while(t--){
		ll x;
		cin>>x;
		v.pb(x);
	}
	merges(v,0,v.size()-1);
	quicks(v);
} 