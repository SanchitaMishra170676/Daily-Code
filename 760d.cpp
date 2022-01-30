#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

bool rev(const  &a, const  &b)
{
    return (a > b);
} 

void printvector(vector<ll> &v){
	ll n = v.size();
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
} 

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		vector<ll> v;
		for(ll i=0;i<n;i++){
			ll x;
			cin>>x;
			v.pb(x);
		}

		sort(v.begin(),v.end(),rev);

		ll cp=0,sp=k;
		

		ll ans=0;
		watch(cp);
		watch(sp);
		while(k--){
			ans+= floor(v[sp]/v[cp]);
			v.erase(v.begin()+sp);
			v.erase(v.begin());
			sp--;
		}

		for(ll i=0;i<v.size();i++){
			ans+=v[i];
		}

		cout<<ans<<"\n";
	}
} 