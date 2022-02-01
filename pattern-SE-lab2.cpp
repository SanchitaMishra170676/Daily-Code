// a+1
// b+1+1
// c+1+1+1
// d+1+1+1+1

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
	char ch='a';
	for(ll i=1;i<=t;i++){
		cout<<ch;	
		for(ll j=0;j<i;j++){
			cout<<"+1";
		}
		ch++;
		cout<<"\n";
	}
} 