#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

 map<ll,ll> mp;
void printDivisors(int n)
{
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
 
            if (n / i == i)
                mp[i]++;
            else {
                mp[i]++;
 
                v.push_back(n / i);
            }
        }
    }
 
    for (int i = v.size() - 1; i >= 0; i--)
        mp[v[i]]++;
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> v;
    for(int i=0;i<n;i++){
    	ll x;
    	cin>>x;
    	v.pb(x);
    }
    ll q;
    cin>>q;
   

    for(ll i=0;i<n;i++){
    	printDivisors(v[i]);
    }

    while(q--){
    	ll x;
    	cin>>x;
    	cout<<mp[x]<<"\n";
    }




} 