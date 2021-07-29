#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

ll fib(ll t){
	if(t == 0|| t ==1){
			return t;
		}
	return (fib(t-1)+fib(t-2));
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	ll ans = fib(t);
	cout<<ans;
} 

