#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

void countingsort(int arr[], int n){

	ll maxi = INT_MIN;
	for(ll i=0;i<n;i++){
		maxi = max(maxi,arr[i]);
	}

	ll k[maxi+1];
	memset(k,0,sizeof(k));
	
	for(ll i=0;i<n;i++){
		k[arr[i]]++;
	}

	for (ll i=1;i<=maxi;i++){
		k[i]+=k[i-1];
		// cout<<k[i]<<" ";
	}

	ll op[n];
	watch(n);
	for(ll i=0;i<n;i++){
		op[k[arr[i]]-1]=arr[i];
		// cout<<k[arr[i]]<<" ";
		k[arr[i]]-=1;
	}	

	for(ll i=0;i<n;i++){
		cout<<op[i]<<" ";
	}

}



signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; 
    cin>>n;
    ll arr[n];

	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}

	countingsort(arr,n);
	
} 