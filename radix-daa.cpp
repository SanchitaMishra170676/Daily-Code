#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;


void countingsort(int arr[], int n, int exp){

	ll maxi = INT_MIN;
	for(ll i=0;i<n;i++){
		maxi = max(maxi,arr[i]);
	}

	ll k[10];
	memset(k,0,sizeof(k));
	
	for(ll i=0;i<n;i++){
		k[(arr[i]/exp)%10]++;
	}

	for (ll i=1;i<10;i++){
		k[i]+=k[i-1];
		// cout<<k[i]<<" ";
	}

	ll op[n];
	// watch(n);

	for (int i = n - 1; i >= 0; i--) {
        op[k[(arr[i] / exp) % 10] - 1] = arr[i];
        k[(arr[i] / exp) % 10]--;
    }

	

	for(ll i=0;i<n;i++){
		arr[i]=op[i];
	}

}



void radixsort(int arr[], int n){

	ll maxi = INT_MIN;
	for(ll i=0;i<n;i++){
		maxi = max(maxi,arr[i]);
	}


	for (int exp = 1; maxi / exp > 0; exp *= 10)
        countingsort(arr, n, exp);

    for(ll i=0;i<n;i++){
    	cout<<arr[i]<<" ";
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
    radixsort(arr,n);
} 