//  https://cses.fi/problemset/task/1068/
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
	while(t!=1){
		cout<<t<<" ";
		if(t%2 == 0){
			t/=2;
		}
		else{
			t=(t*3)+1;
		}
	}
	cout<<"1";

} 

