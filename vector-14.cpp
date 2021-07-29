#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
// To print prime nos at prime indexes
#define pb push_back
#define int long long
using namespace std;

void sieveprime(vector<ll> &v, ll n)
{
    vector<bool> prime(n+1,1);
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p = 2; p <= n; p++)
        if (prime[p])
            v.pb(p);
}

bool isprime(ll n){
	if (n==1){
		return false;
	}

	for(ll i=2;i<n;i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}
signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	ll n=t;
	vector<ll> v,a;
	sieveprime(v,t);
	a.pb(1);
	while(t--){
		ll x;
		cin>>x;
		a.pb(x);
	}
	ll j=0;
	for(ll i=v[j]; i<=n; i=v[++j]){
		
		if(isprime(a[i])){
			cout<<a[i]<<" ";
		}
	}

} 