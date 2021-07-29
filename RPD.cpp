// https://www.codechef.com/problems/RPD
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

ll sumOfDigit(ll n){
	ll sum=0;
	while(n>0){
		sum+= n%10;
		n/=10;
	}
	return sum;
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int v[n];
		for(ll i=0;i<n;i++){
			cin>>v[i];
		}		
		ll sum=-1, ma=-1;
		for(ll i=0;i<n;i++){
			for(ll j=i+1;j<n;j++){
				ll mul = v[i]*v[j];
				ll sum= sumOfDigit(mul);
				ma=max(sum,ma);
			}
		}
		cout<<ma<<"\n";
	}
} 

