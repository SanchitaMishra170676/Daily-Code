#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;


class Node
{
public:
	ll data;
	Node* left;
	Node* right;
	Node(ll value, Node* l, Node* r){
		data = value;
		left=l;
		right=r;
	}

};

Node insert(int arr[], int low,int high){

	int mid = (low+high)/2;
	Node* lc = insert(arr,low,mid-1);
	Node* rc= insert(arr,mid+1,high);
	Node* node= new Node()

}



signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
} 