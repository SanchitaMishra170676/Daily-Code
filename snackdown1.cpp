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
		ll arr[3]={0};
		for(ll i=0;i<5;i++){
			int t; cin>>t;
			arr[t]++;
		}
		// watch(arr[0]);
		if(arr[1]>arr[2])
			cout<<"INDIA\n";
		else if(arr[2]>arr[1])
			cout<<"ENGLAND\n";
		else
			cout<<"DRAW\n";
	}
} 