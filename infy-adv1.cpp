#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;



		

signed main(void){
   
	int n;
	cin>>n;
	ll x,i,sum=0;
	vector<ll> v;
	for(int i=0;i<n;i++){
		cin>>x;
		v.pb(x);
	}
	sum+=v[0]+v[0];

	for(i=1;i<n-1;i++){
		sum+=min(v[i],v[i+1]);
	}
	if(i<n) sum+=v[i];

	cout<<sum<<"\n";
} 