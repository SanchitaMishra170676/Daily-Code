// Resize a vector
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	while(t--){
		ll n1, n2;
		cin>>n1>>n2;
		vector<ll> v(n1);
		cout<<v.size()<<" ";
		v.resize(n2);
		cout<<v.size()<<" ";
		cout<<"\n";
	}
}  