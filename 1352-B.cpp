// https://codeforces.com/contest/1352/problem/B
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
		ll n,k;
		cin>>n>>k;
		ll b=k-1;
		ll ans1,ans2,r1,r2;
		bool flag1=false, flag2=false;
		ans1= 1*b;
		ans2= 2*b;
		// cout<<"ans1= "<<ans1<<" n= "<<n<<"\n";
		if(ans1<n){
			r1= n-ans1;
			if(r1%2 != 0){
				flag1=true;
			}
		}
		// cout<<"ans2= "<<ans2<<" n= "<<n<<"\n";
		if( ans2<n){
			r2= n-ans2;
			if(r2%2 == 0){
				flag2=true;
			}
			// cout<<" here ";
		}

		if(flag1 == false && flag2 == false){
			cout<<"NO"<<"\n";
		}	
		else{
			cout<<"YES"<<"\n";
			if(flag1){
				for(ll i=0;i<b;i++){
					cout<<"1 ";
				}
				cout<<r1<<"\n";
			}
			else{
				for(ll i=0;i<b;i++){
					cout<<"2 ";
				}
				cout<<r2<<"\n";
			}
		}
	}
} 

