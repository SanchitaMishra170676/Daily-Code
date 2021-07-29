#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

ll first(ll x){
	return (x/2)+10;
}

ll second(ll x){
	return (x-10);
}
signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	while(t--){
		ll x,m,n;
		cin>>x>>m>>n;


		while(m>0 && n>0){
			if(first(x) < x){
				x= first(x);
				m--;
			}
			else{
				x= second(x);
				n--;
			}

			 // cout<<"x= "<<x<<" ";

		}	

		while(n>0){
			x=second(x);
			n--;
			// cout<<"x= "<<x<<" ";
		}

		if(x <= 0){
			cout<<"YES"<<"\n";
		}

		else{
			cout<<"NO"<<"\n";
		}


	}
} 