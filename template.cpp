#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define ll long long
using namespace std;



// sort in reverse
bool rev(const  &a, const  &b)
{
    return (a > b);
} 

// sort according to second element in pair
bool pair_sec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
} 
 
// sort according to second element in pair in reverse order
bool pair_sec_rev(const pair<ll,ll> &a,
              const pair<ll,ll> &b) 
{
    return (a.second > b.second);
}

// sort according to first element in revese order
bool pair_first_rev(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.first > b.first);
}

// To print deque
void printdeque(deque<string> &queue){ 
	auto it = queue.begin();
	for(; it != queue.end(); ++it){
		cout<<*it<<" ";
	}
}  

// To print vector  
void printvector(vector<ll> &v){
	ll n = v.size();
	for(int i=0;i<n;i++){
		cout<<v[i]<<"\n";
	}
}  

// To print vector pair
void printvectorpair(vector<pair<ll,ll>> &v){
	ll n = v.size();
	for(int i=0;i<n;i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
} 

//=================================== ALGO =====================================

// to calculate fast power
ll fastpower(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = fastpower(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

// to create adjacency list for graph
void adjacency(vector<ll> adj[], ll i, ll x)
{ 
    adj[i].pb(x);
    adj[x].pb(i); 
} 

// Called internally from DFS
void DFSUtil(ll u, vector<ll> adj[], vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";
    for (ll i=0; i<adj[u].size(); i++)
        if (visited[adj[u][i]] == false)
            DFSUtil(adj[u][i], adj, visited);
}

// Depth first search
void DFS(vector<ll> adj[], ll V)
{
    vector<bool> visited(V, false);
    for (ll u=0; u<V; u++)
        if (visited[u] == false)
            DFSUtil(u, adj, visited);
}


// function for binary search - takes index - returns index
ll bs(vector<ll> &v, ll l, ll r, ll x)
{
    if (r >= l) {
        ll mid = l + (r - l) / 2; 
  
        if (v[mid] == x)
            return mid;
  
        if (v[mid] > x)
            return bs (v, l, mid - 1, x);
 
        return bs(v, mid + 1, r, x);
    }        
    
    return -1;
}


// To store all prime no till n in v 
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


signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    ll t; 
	cin>>t;
	while(t--){
		
	}
}   
  