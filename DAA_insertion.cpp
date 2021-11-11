#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

void printvector(vector<int> &v){
	int n = v.size();
	for(int i=0;i<n;i++){
		cout<<v[i]<<"\n";
	}
}  


void selection(vector<int>  &v,int n){
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		mini=i;
		for(int j=i+1;j<n;j++){
			if(v[mini]>v[j]){
				mini=j;
			}
		}
		swap(v[i],v[mini]);
	}
}

void insertion(vector<int> &v, int n){
	int key=0,i=0;
	for (int j=1;j<n;j++){
		key=v[j];
		i= j-1;
		while(i>0 && v[i]>key)
		{
			v[i+1]=v[i];
			i--;
		}
		v[i+1]=key;
	}

}


signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
	cin>>t;
	int n=t;
	vector<int>v;
	while(t--){
		int temp;
		cin>>temp;
		v.pb(temp);
	}

	// insertion(v,n);
	selection(v,n);
	printvector(v);
} 