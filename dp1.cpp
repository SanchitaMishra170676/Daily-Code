#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void oddnum (ll arr[] ){
	ll temp[] = {1,3,5,7,9};
	arr[0] =0;
	for(ll i=1;i<=5;i++){
		arr[i] = temp[i-1];
	}
	ll j=1;
	for(ll i=6; i< 10000000000000000; i++){
			arr[i] = (arr[j]*10)+ temp[0];
			i++;
			arr[i] = (arr[j]*10)+ temp[1];
			i++;
			arr[i] = (arr[j]*10)+ temp[2];
			i++;
			arr[i] = (arr[j]*10)+ temp[3];
			i++;
			arr[i] = (arr[j]*10)+ temp[4];
			j++;
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
	ll arr[10000000000000000];
	ll t;
	cin>>t;
	cout<<t;
	oddnum(arr);
	while(t--){
		ll n;
		cin>>n;
		cout<<arr[n];
	}
}