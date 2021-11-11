#include <bits/stdc++.h>
using namespace std;

int BS(int A[], int l , int r, int key){

	if(l<=r){
		int mid = (l+r)/2;

		if(A[mid] == key)
			return mid+1;
		else if(A[mid] > key)
			return BS(A,l,mid-1,key);
		else
			return BS(A,mid+1,r,key);
	}

	return -1;
}

int LS(int A[], int n, int key){
	if(n<0)
		return -1;
	if(A[n] == key)
		return n+1;
	return LS(A,n-1,key);
}

int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
    	cin>>A[i];
    }
    int key;
    cin>>key;
    cout<<"With Binary Search= "<<BS(A,0,n-1,key)<<"\n";
    cout<<"With Linear Search= "<<LS(A,n-1,key);

} 