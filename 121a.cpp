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
	while(t--){
		string str;
		cin>>str;
		map<char,int> mp;
		for(char i: str){
			mp[i]++;
		}
		string ans="";
		for(auto it: mp){
			if(it.second == 2){
				ans+= it.first;
				ans+= it.first;
			}
			else{
				ans+=it.first;
			}
		}

		cout<<ans<<"\n";
	}
} 