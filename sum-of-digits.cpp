#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
using namespace std;

int sumd(int d){
	if(d<=0)
		return 0;
	return (d%10)+sumd(d/10);
	
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	cout<<sumd(t);
} 