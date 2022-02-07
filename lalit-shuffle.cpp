#include <bits/stdc++.h>
#define ll long long
#define pb push_back 
#define int long long
using namespace std;

bool rev(const  &a, const  &b)
{
    return (a > b);
} 

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	vector <ll> v;
	while(t--){
		ll x;
		cin>>x;
		v.pb(x);
	}
	sort(v.begin(),v.end(),rev);
	for(int i=1;i<v.size();i+=2){
		swap(v[i],v[i-1]);
	}


	for(auto it: v){
		cout<<it<<" ";
	}
} 