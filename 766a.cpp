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
		ll n,m,r,c;
		cin>>n>>m>>r>>c;
		vector<string> v;
		for(ll i=0;i<n;i++){
			string x;
			cin>>x;
			v.pb(x);
		}
		r=r-1; c--;
		if(v[r][c] =='B'){
			cout<<"0\n";
			continue;
		}

		ll flag=1;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				if(v[i][j] == 'B' || flag==0){
					flag=0;
					break;
				}
			}
		}

		if(flag){
			cout<<"-1\n";
			continue;
		}

		ll ans=0;
		for(ll i=0;i<m;i++){
			if(v[r][i]=='B'){
				ans=1; break;
			}
		}

		for(ll i=0;i<n;i++){
			if(v[i][c]=='B'){
				ans=1;break;
			}
		}

		if(!ans){
			ans=2;
		}
		cout<<ans<<"\n";
	}
} 