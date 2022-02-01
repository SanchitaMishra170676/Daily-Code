// 5
// 10 15
// 20 25 30
// 35 40 45 50

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
    ll t; 
	cin>>t;
	ll k=1;
	for(ll i=1;i<=t;i++){
		for(int j=0;j<i;j++){
			cout<<k*5<<" ";
			k++;
		}
		cout<<"\n";
	}
} 
