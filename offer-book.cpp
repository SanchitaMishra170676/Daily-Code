#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

bool fun(ll a, ll b)
{
    return (a > b);
} 

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	int arr[t+1];
	for(ll i=1;i<=t;i++){
		cin>>arr[i];
	}

	ll sum=0;
	sort(arr+1,arr+t+1,fun);
	for(int i=1;i<=t;i++){
		if(i%3 == 0)	
			continue;
		sum+=arr[i];
	}
	cout<<sum<<"\n";
} 