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
    ll t; 
	cin>>t;
	map<string,ll> like,dislike;
	vector<string> v;
	while(t--){
		ll l,d;
		cin>>l;
		
		for(ll i=0;i<l;i++){
			string str;
			cin>>str;
			like[str]++;
		}
		cin>>d;
		for(ll j=0;j<d;j++){
			string str;
			cin>>str;
			dislike[str]++;
		}

	}
	for(auto it: like){
			if(dislike[it.first]<it.second){
				v.pb(it.first);
			}
		}

		cout<<v.size()<<" ";

		for(ll i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}

		cout<<"\n";
} 