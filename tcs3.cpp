#include <bits/stdc++.h>
#define ll long long
#define dl double 
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define int long long
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
  	
  	ll n; cin>>n;
  	vector<pair<ll, ll>> v;

  	for(ll i=0;i<n;i++){
  		ll x, y;
  		cin>>x>>y;
  		v.pb({x,y});
  	}
  	int ans=0;
  	if(v.size()>1) ans=1;

  	for(int i=1;i<n-1;i++){
  		ll x1=v[i-1].ff;
  		ll y1=v[i-1].ss;
  		ll x=v[i].ff;
  		ll y=v[i].ss;
  		ll x2=v[i+1].ff;
  		ll y2=v[i+1].ss;
  		dl m1=INT_MAX, m2=INT_MAX;
  		if(x-x1 != 0){
  			m1=(y-y1)/(x-x1);
  		}
  		if(x2-x!=0){
  			m2=(y2-y)/(x2-x);
  		}
  		
  		// cout<<m1<<" "<<m2<<",";
  		if(m1!=m2) ans++;
  	}


  	ll x1=v[n-2].ff;
  		ll y1=v[n-2].ss;
  		ll x=v[n-1].ff;
  		ll y=v[n-1].ss;
  		ll x2=v[0].ff;
  		ll y2=v[0].ss;
  		dl m1=INT_MAX, m2=INT_MAX;
  		if(x-x1 != 0){
  			m1=(y-y1)/(x-x1);
  		}
  		if(x2-x!=0){
  			m2=(y2-y)/(x2-x);
  		}
  		
  		// cout<<m1<<" "<<m2<<",";
  		if(m1!=m2) ans++;

  		
  		cout<<ans;

  } 