#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

void adjacency(vector<ll> adj[], ll i, ll x)
{
    adj[i].pb(x);
    // uncomment next line for undirected 
    adj[x].pb(i);
}


signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		
	}
} 

