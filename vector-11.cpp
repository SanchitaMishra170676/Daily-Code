// Sorting acc to sec element, acc to first if equal
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

// sort according to second element in pair
bool pair_sec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
	if (a.second == b.second)
		return a.first < b.first;
	
    return (a.second < b.second);
}
 

// To print vector pair
void printvectorpair(vector<pair<ll,ll>> &v){
	ll n = v.size();
	for(int i=0;i<n;i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
} 

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	vector<pair<ll,ll>> v;
	while(t--){
		ll x,y;
		cin>>x>>y;
		v.pb({x,y});
	}
	sort(v.begin(),v.end(),pair_sec);
	printvectorpair(v);
} 