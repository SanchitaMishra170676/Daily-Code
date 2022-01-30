#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; 
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		v.pb(x);
	}
	ll h;
	cin>>h;
	if(h>n){
		cout<<"-1\n";
	}
	else{
		sort(v.begin(),v.end());
		ll ans=0;
		ans+=v[v.size()-1];
		h--;
		ll i=0;
		while(h>0){
			ans+=v[i];
			i++;
			h--;
		}
		cout<<ans<<"\n";
	}
} 