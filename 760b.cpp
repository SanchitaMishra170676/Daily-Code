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
	while(t--){
		ll n;
		cin>>n;
		vector<string> v;
		for(int i=0;i<n-2;i++){
			string x;
			cin>>x;
			v.pb(x);
		}
		string ans="";	
		ans+=v[0][0];
		ll flag =1;
		for(ll i=1;i<n-2;i++){
			if(v[i][0] == v[i-1][1]){
				ans+=v[i][0];
			}
			else{
				ans+=v[i-1][1];
				ans+=v[i][0];
				flag=0;
			}
		}
		ans+=v[n-3][1];
		if(flag){
			ans+="a";
		}

		cout<<ans<<"\n";
	}
} 