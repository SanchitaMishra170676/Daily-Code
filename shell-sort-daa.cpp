#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;


void shellsort(int arr[], int n){
	for (int gap= n/2;gap>0;gap/=2){
		for(int i=gap;i<n;i++){
			int temp = arr[i];
			int j;
			for( j=i; arr[j-gap]>temp && j>gap; j-=gap){
					arr[j]= arr[j-gap];
			}
				arr[j]=temp;
		}
	}
}


void printarry(int arr[],int n){
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
} 

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++){
		cin>>arr[i];
	}
	shellsort(arr,t);
	printarry(arr,t);
} 