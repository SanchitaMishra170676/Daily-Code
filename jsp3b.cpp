#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define int long long
using namespace std;


map<ll,ll> ans;
void BFS(vector<int> adj[], int visited[], int v, int k){
	queue<int> q;
	q.push(k);
		visited[k]=1;
		// (k is the first value which is unvisited in a component)
	while(! q.empty()){
		int val=q.front();
		cout<<val<<" ";
		q.pop();

		for(int i=0;i<adj[val].size();i++){
			if(!visited[adj[val][i]]){
				q.push(adj[val][i]);
				visited[adj[val][i]]=1;
			}
		}

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
	
	if(ans.size()==0) cout<<-1;
	else
	for(auto it: ans){
		cout<<it.first<<" ";
	}

	cout<<"\n";
} 