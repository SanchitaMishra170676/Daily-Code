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
		ll a,b,c;
		cin>>a>>b>>c;
		if(c<a){
			swap(c,a);
		}

		if((a+c)%(2*b) == 0){
			cout<<"YES\n";
			continue;
		}
		else if((2*b)-c >0 && ((2*b)-c)%a == 0){
			cout<<"YES\n";
			continue;
		}
		else if((2*b)-a >0 && ((2*b)-a)%c == 0){
			cout<<"YES\n";
			continue;
		}
		else{
			cout<<"NO\n";
		}
	}
} 