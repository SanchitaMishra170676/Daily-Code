#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define ll long long
using namespace std;

void adjacency(vector<ll> adj[], ll i, ll x)
{
    adj[i].pb(x);
    adj[x].pb(i);
}

void DFSUtil(ll u, vector<ll> adj[], vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";
    for (ll i=0; i<adj[u].size(); i++)
        if (visited[adj[u][i]] == false) 
            DFSUtil(adj[u][i], adj, visited);
}
 
void DFS(vector<ll> adj[], ll V) 
{
    vector<bool> visited(V, false);
    for (ll u=0; u<V; u++)
        if (visited[u] == false)
            DFSUtil(u, adj, visited);
}
 
signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t,V; 
	cin>>t;
    cin>>V;
    vector<ll> adj[t];
	while(t--){
		ll i,x;
        cin>>i>>x;
        adjacency(adj,x,i);
	}

    DFS(adj, V);
} 