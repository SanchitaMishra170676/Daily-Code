#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		string s,t;
		cin>>s>>t;
		stack<char> st1, st2;
		ll sl= s.length();
		ll tl= t.length();
		for(ll i=sl-1;i>=0;i--){
			st1.push(s[i]);
		}

		ll i=0;
		while(!st1.empty() || i<tl){
			char ch = st1.top();
			if(ch == t[i] ){
				i++;
			}
			if(i>0 && )
		}

	}
} 