#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;


void jerry(ll n, ll k, vector<ll> &w, vector<ll> &t){
	map<ll,ll> mp1;
	map <ll,ll> mp2;

	for(ll i=0;i<n;i++){
		mp1[w[i]]=t[i];
	}

	for(int i=0;i<n;i++){
		ll maxi=INT_MIN;
		for(ll j=i+1;j<i+k && j<n;j++){
			maxi=max(maxi, w[j]);
		}

		if(maxi==INT_MIN) maxi=-1;
		mp2[w[i]]=maxi;
		// cout<<maxi<<" ";
	}


	ll maxsum = INT_MIN;

	for(auto i: mp2){
		ll sum = mp1[i.first];
		ll nt=i.second;
		while(nt != -1){
			sum+=mp1[nt];
			nt=mp2[nt];
		}
		// cout<<i.first<<"-> "<<sum<<"\n";
		maxsum = max(maxsum,sum);
	}


	cout<<maxsum<<"\n";
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	ll n,k;
	while(t--){
		cin>>n>>k;
		vector<ll>w;
		vector<ll>t;
		for(int i=0;i<n;i++){
			ll temp; cin>>temp;
			w.pb(temp);
		}
		for(ll i=0;i<n;i++){
			ll temp; cin>>temp;
			t.pb(temp);
		}
		jerry(n,k,w,t);
	}
} 