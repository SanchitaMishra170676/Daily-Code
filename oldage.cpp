#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;
void adjacency(vector<int> adj[], int e){
	for (int i=0;i<e;i++){
		int v1,v2;
		cin>>v1>>v2;
		if(adj[v2].size()==0)
		adj[v2].pb(v1);
	}
}

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

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll e,n,s;
    cin>>e>>n>>s;
    vector<int> adj[n+1];
    adjacency(adj,e);
    // print_adj(adj,n);
    
    int visited[n+1]={0};
    int ans=0;
    while(adj[s].size()!=0){
    	if(visited[s]){
    		ans=-1;
    		break;
    	}
    	visited[s]=1;
    	s=adj[s][0];
    	ans++;
    }

    cout<<ans<<"\n";

} 