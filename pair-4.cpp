#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

// To print vector pair
void printvectorpair(vector<pair<ll,char>> &v){
	ll n = v.size();
	for(int i=0;i<n;i++){
		cout<<v[i].second<<" ";
	}
	cout<<"\n";
}

void corresponding(vector<ll> &a1, vector<char> &a2, vector<pair<ll,char>> &p){
	ll n = a1.size();
	for(ll i=0;i<n;i++){
		p.pb({a1[i],a2[i]});
	}	
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v;
		vector<char> a;
		vector<pair<ll,char>> p;
		ll n2=n;
		while(n--){
			ll x;
			cin>>x;
			v.pb(x);
		}
		n=n2;
		while(n--){
			char c;
			cin>>c;
			a.pb(c);
		}

		corresponding(v,a,p);
		sort(p.begin(),p.end());
		printvectorpair(p);
	}
} 