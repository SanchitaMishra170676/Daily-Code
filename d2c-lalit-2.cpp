#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

signed main(void){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
  cin>>t;
  vector<int>v;
  while(t--){
    int temp; cin>>temp;
    v.pb(temp);
  }

    int count =0;
  for(int i=0,j=2;j<v.size();j++,i++){
    int mid=(i+j)/2;
      if((v[mid]>v[i] && v[mid]<v[j]) || (v[mid]<v[i] && v[mid]>v[j])){
        count++;
      }
  }

  cout<<count; 

} 