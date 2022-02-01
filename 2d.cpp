	#include <bits/stdc++.h>
	#define ll long long
	#define mod 1000000007
	#define pb push_back 
	#define int long long
	#define pi 3.14159265358979323846
	#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
	using namespace std;
	int n;
	void printd(int arr[10][10]){
		for(int i=0;i<10;i++){
	    	for(int j=0;j<10;j++){
	    		cout<<arr[i][j]<<" ";
	    	}
	    	cout<<"\n";
	    }
	}
	signed main(void){
		ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    cout.tie(NULL);
	    // int** arr = new int*[10];
	 
	    // // dynamically allocate memory of size `N` for each row
	    // for (int i = 0; i < 10; i++) {
	    //     arr[i] = new int[10];
	    // }
	    // n=10;
	    // for(int i=0;i<10;i++){
	    // 	for(int j=0;j<10;j++){
	    // 		arr[i][j]=i;
	    // 	}
	    // }
	    int arr[10][10]={0};
	    printd(arr);

	} 