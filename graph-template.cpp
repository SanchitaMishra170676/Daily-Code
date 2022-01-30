#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

void print_adj(vector<int> adj[], int v){
	for(int i=0;i<=v;i++){
		cout<<i<<"\t";
		int n=adj[i].size();
		for(int j=0;j<n;j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void adjacency(vector<int> adj[], int e){
	for (int i=0;i<e;i++){
		int v1,v2;
		cin>>v1>>v2;
		adj[v1].pb(v2);
		adj[v2].pb(v1);
	}
}

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

void DFS()

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll v,e; 
	cin>>v>>e;
	vector<int> adj[v+1];
	adjacency(adj,e);
	print_adj(adj,v);
		cout<<"\n";

	// BFS
	int visited[v+1]={0};
	for(int i=1;i<v+1;i++){
		if(!visited[i]){
			BFS(adj,visited,v,i);
		}
	}

	//DFS
	int visited[v+1]={0};
	for(int i=1;i<v+1;i++){
		if(!visited[i]){
			DFS(adj,visited,v,i);
		}
	}

} 