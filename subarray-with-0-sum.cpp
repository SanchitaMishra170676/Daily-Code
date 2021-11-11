#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

int maxLen(int A[], int n)
{
    int pre[n]={0};     
    pre[0]=A[0];
    for(int i=1;i<n;i++){
    	pre[i]=A[i]+pre[i-1];
    }
    map<int,int> mp;
    mp[0]=0;
    int ans=0,temp=0; 
    for(int i=0;i<n;i++){
    	if(pre[i] == 0){
    		temp=i+1; 
    	}
    	else if(mp[pre[i]]==0){
    		mp[pre[i]]= i+1;
    	}
    	else{
    		temp= i+1-mp[pre[i]];
    	}

    	ans=max(temp,ans);
    }

    
   return ans;
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
	cout<<maxLen(arr,n);
} 