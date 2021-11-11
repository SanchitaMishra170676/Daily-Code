#include <bits/stdc++.h>
#define ll long long
#define pb push_back 
#define int long long
using namespace std;

// sort according to second element in pair
bool comp( pair<pair<int,int>,string> &a,
               pair<pair<int,int>,string> &b)
{
    if(a.second == b.second){
      return a.first.second > b.first.second;
    }

    return (a.second < b.second);
} 

signed main(void){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
  cin>>t;
  vector<pair<pair<int,int>,string>> v;
  for(ll i=1;i<=t;i++){
    string str; int score;
    cin>>str>>score;
      v.pb({{i,score},str});
  }

    sort(v.begin(),v.end(),comp);

    for(int i=0;i<v.size();i++){
      cout<<v[i].first.first<<" ";
    }

} 