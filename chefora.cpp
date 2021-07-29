#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

void chefora(ll arr[]){
	for(ll i=0;i<100; i++){
		ll s=i;
		ll t=i/10;
		while(t>0){
			s=(s*10)+t%10;
			t/=10;
		}
		arr[i] = s;
		// cout<<arr[i]<<" ";
	}
	// cout<<"\n";
}

void cumulative(ll arr[], ll cum[]){
	cum[0]=0;
	cout<<cum[0]<<" ";
	for(ll i=1;i<100;i++){
		cum[i]=(cum[i-1]+arr[i])%mod;
		// cout<<cum[i]<<" ";
	}
	// cout<<"\n";
}


ll fastpower(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = fastpower(x, y / 2);
    if (y % 2 == 0)
        return (temp * temp)%mod;
    else
        return (((x * temp)%mod) * temp)%mod;
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	ll arr[100000];
	ll cum[100000];
	chefora(arr);
	cumulative(arr,cum);
	while(t--){
		ll q,l;
		cin>>q>>l;
		ll x= arr[q];
		ll y= cum[l]-cum[q];
		ll ans = fastpower(x,y);
		cout<<ans<<"\n";
	}
} 