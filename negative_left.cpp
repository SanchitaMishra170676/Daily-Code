#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void negavtiveleft (int arr[], int n){
	int l=-1;
	for(int i=0; i<n;i++){
		if(arr[i] < 0 &&  l>-1){
			swap(arr[i], arr[l]);
			l++;
		}
		else if (arr[i]>0 && l== -1){
			l=i;
		}
	}
}
int main(void){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }

    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    }
    cout<<"\n";
    negavtiveleft(arr,n);

     for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    }
    
}