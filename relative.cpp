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
		ll g,c;
		cin>>g>>c;
		ll h = ((c/2)*c)/(g);
		cout<<h<<"\n";
	}
} 