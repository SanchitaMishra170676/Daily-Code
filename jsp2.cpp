#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define int long long
using namespace std;
	

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
	
	map<ll,vector<pair<ll,ll>>> adj;

	cin>>e;

	for(ll i=0;i<e;i++)
	{
		ll x,y,w; 
		cin>>x>>y>>w;
		adj[x].pb({y,w});
	}

	ll p1,p2;
	cin>>p1>>p2;

	


 	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
	
	map<ll,ll> distTo;
	for(ll i=0;i<pp.size();i++){
		distTo[pp[i]]=INT_MAX;
	}

	distTo[p1] = 0;
	pq.push(make_pair(0,p1));	
	
	while( !pq.empty() ){
		int dist = pq.top().first;
		int prev = pq.top().second;
		pq.pop();
		
		vector<pair<int,int> >::iterator it;
		for( it = adj[prev].begin() ; it != adj[prev].end() ; it++){
			int next = it->first;
			int nextDist = it->second;
			if( distTo[next] > distTo[prev] + nextDist){
				distTo[next] = distTo[prev] + nextDist;
				pq.push(make_pair(distTo[next], next));
			}
		}
		
	}
	
	cout<<distTo[p2]<<"\n";
	

} 