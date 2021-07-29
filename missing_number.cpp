// https://cses.fi/problemset/task/1083

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
	ll sum=0;
	ll exp = (t*(t+1))/2;
	t--;
	while(t--){
		ll x;
		cin>>x;
		sum+=x;
	}
	cout<<exp-sum;
} 

