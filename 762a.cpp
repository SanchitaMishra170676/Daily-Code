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
		ll n=str.length();
		if(n%2 != 0){
			cout<<"NO\n";
			continue;
		}
		string s1=str.substr(0,n/2);
		string s2=str.substr(n/2,n);
		if(s1 == s2){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
} 