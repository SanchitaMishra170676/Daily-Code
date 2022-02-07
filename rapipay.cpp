#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;



signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m, s;
    cin>>n>>s>>m;
    vector<ll> v;


    for(ll i=0;i<n;i++){
    	ll x;
    	cin>>x;
    	v.pb(x);
    }

    int i=0;
    // sort(v.begin(),v.end());
   while(i<n){
   	sort(v.begin()+i,v.begin()+s+i);
   	i+=s;
   }

   priority_queue<pair<vector<int>,int>, vector<pair<vector<int>,int>>, greater<pair<vector<int>,int>> > g;
    i=0;
    int c=1;
    while(i<n){
    	vector<ll> vec;
    	for(int j=0;j<s;j++){
    			vec.pb(v[i]);
    			i++;
    	}
    	g.push({vec,c});
        c++;
    }

    int ans=0;
    while(m>s){
        g.pop();
        m-=s;
        ans++;
    }

    	cout<<g.top().first[m-1]<<" "<<g.top().second<<"\n";
    	

    

} 