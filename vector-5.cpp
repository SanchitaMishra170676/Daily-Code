#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

// To print vector
void printvector(vector<ll> &v){
	ll n = v.size();
	for(int i=0;i<n;i++){
		cout<<v[i]<<"\n";
	}
} 

// sort in reverse
bool rev(const  &a, const  &b)
{
    return (a > b);
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
	sort(v.begin(),v.end(),rev);
	printvector(v);
} 
