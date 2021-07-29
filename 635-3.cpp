#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;


vector<bool> v;
vector<vector<int> > g;
ll arr[1000000];
ll cnt =0;
stack<ll> st;

void edge(int a, int b)
{
    g[a].pb(b);
    g[b].pb(a);
}

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    q.push(-1);
    v[u] = true; 
  
    while (!q.empty()) { 
        int f = q.front(); 
        q.pop();
        if(f == -1){
            // cout<<"\n";
            if(!q.empty())
           { 
            q.push(-1);
           }
            cnt++;
            continue;
        }
        else{
        // cout << f+1 << " ";
        arr[f+1]=cnt;
        st.push(f+1);
        }
        ll flag=0;
        for (auto i = g[f].begin(); i != g[f].end(); i++) {
            if (!v[*i]) {
                q.push(*i);
                flag=1;
                v[*i] = true;
            }
        }
    }
}

signed main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, e,c;
    cin >> n >> c;
    e=n-1;
    v.assign(n, false);
    g.assign(n, vector<int>());
    int a, b;
    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        edge(a-1, b-1);
    }
    cnt =0;
    for (int i = 0; i < n; i++) {
        if (!v[i])
            bfs(i);
    }
    ll ans=0;
    while(c--){
        ll x = st.top();
        st.pop();
        cout<<x<<" = "<<arr[x]<<", ";
        ans+= arr[x];
    }
    cout<<ans<<"\n";
}