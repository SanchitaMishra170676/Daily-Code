#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define int long long
using namespace std;


bool ans=false;
void dfs(map<ll,vector<ll>> &adj, ll p1, ll p2, map<ll,bool> &v){
        if(v[p1])
            return ;
        v[p1]=1;
        // ans.push_back(i);
        if(p1==p2) {
        	ans=true;
        	return;
        }
        for(int j=0;j<adj[p1].size();j++){
            dfs(adj,adj[p1][j],p2,v);
        }
    }
		

signed main(void){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    

	ll v,e; 
	cin>>v;

	vector<ll> pp;

	for(ll i=0;i<v;i++)
	{
		ll x; cin>>x;
		pp.pb(x);
	}
	
	map<ll,vector<ll>> adj;

	cin>>e;

	for(ll i=0;i<e;i++)
	{
		ll x,y; 
		cin>>x>>y;
		adj[x].pb(y);
	}

	ll p1,p2;
	cin>>p1>>p2;

	map<ll,bool> vis;

	dfs(adj,p1,p2,vis);
	if(ans) cout<<1<<"\n";
	else cout<<0<<"\n";

} 