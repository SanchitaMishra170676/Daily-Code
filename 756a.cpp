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
		ll x;
		cin>>x;
		if(x%2 == 0)
		{
			cout<<"0\n";
			continue;
		}

		ll eve=0, fir=0;
		while(x>0){
			ll rem = x%10;
			if(rem%2 ==0){
				eve=rem;
			}
			fir= rem;
			x=x/10;
		}

		if (fir%2 == 0){
			cout<<"1\n";
		}

		else if(eve !=0){
			cout<<"2\n";
		}

		else{
			cout<<"-1\n";
		}


	}
} 