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

// erase_all
void erase_all(vector<ll> &v){
	v.erase(v.begin(),v.end()); 
}

// erase_at
void erase_at(vector<ll> &v){
	ll x;
	cin>>x;
	x--;
	v.erase(v.begin()+x);
}

// erase_within
void erase_within(vector<ll> &v){
	ll x,y;
	cin>>x>>y;
	x--;y--;
	v.erase(v.begin()+x, v.begin()+y);
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
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n==1){
			erase_all(v);
		}
		if(n==2){
			erase_at(v);
		}
		if(n==3){
			erase_within(v);
		}
		printvector(v);
		cout<<"\n";
	}
} 
