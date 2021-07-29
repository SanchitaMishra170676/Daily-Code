// To find the frequency of an element in a sorted array using bubble sort 
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;
 
 // function fir binary search
ll bs(vector<ll> &v, ll l, ll r, ll x)
{
    if (r >= l) {
        ll mid = l + (r - l) / 2;
  
        if (v[mid] == x)
            return mid;
  
        if (v[mid] > x)
            return bs (v, l, mid - 1, x);
 
        return bs(v, mid + 1, r, x);
    }
    
    return -1;
}


// function to find the first occurence of the no 
ll firsto(vector<ll> &v, ll start, ll end, ll n, ll s){
		

		if(start <= end){
			ll mid = (start+end)/2;

				if((mid== 0)||(v[mid]== n && v[mid-1] <n)){
					return mid;
					
				} 
				if(v[mid] >n){
					return firsto(v,0,mid-1,n,s);
				}
				else{
					return firsto(v,mid+1,s,n,s);
				}
		}

		return -1;
}
   
// function to find the last occurence of the no  
ll lasto(vector<ll> &v, ll start, ll end, ll n, ll s){
		

		if(start <= end){
			ll mid = (start+end)/2;
				if((mid== s)||(v[mid]== n && v[mid+1] >n)){
					return mid;
				} 
				if(v[mid] >n){
					return lasto(v,0,mid-1,n,s);
				}
				else{
					return lasto(v,mid+1,s,n,s);
				}
		}
		return 0;
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	vector<ll> v;
	while(t--){
		ll x;
		cin>>x;
		v.pb(x);
	}
	ll x;
	cin>>x;
	ll s = v.size();
	// ll first = firsto(v, 0, s-1, n , s-1);
	// ll last = lasto(v, 0, s-1, n, s-1);
	// cout<<last-first+1;
	ll b = bs(v,0,s-1,x);
	cout<<"binary search "<<b;

} 