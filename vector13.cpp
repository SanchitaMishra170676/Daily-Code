#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

ll calsum(vector<vector<ll>> &v, ll n){

	ll flag = 0,j=0, sum=0, min_sum= LONG_MAX;
	while(flag < n){
		flag=0; sum=0;
		for(ll i=0; i<n;i++){
			if(v[i].empty()){
				flag++;   
			}
			else{
				sum+=v[i][j];
				v[i].erase(v[i].begin());
			}
		}

		if(min_sum > sum && flag!=n){
			min_sum =sum;
		}
	}

	return min_sum;
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll n; 
	cin>>n;
	vector<vector<ll>> v(n);
	for(ll i=0; i<n;i++){
		ll t;
		cin>>t;
		while(t--){
			ll x;
			cin>>x;
			v[i].pb(x);
		}
	} 

	
   cout<<calsum(v,n);

} 