#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
    ll b;
    cin>>b;
    t--;
    ll n = t+1;
    vector<pair<ll,ll>> v;
	while(t--){
	   	ll x,y;
            cin>>x>>y;
            v.pb({x,y});
	}
    sort(v.begin(), v.end());

    ll edg[n]={0}, sib[n]={0};
    edg[1]=1;
    for(ll i =1, j=1;i<=t;i++){
        ll l=0,r=0;
        if(v[j].first == i){
            if(v[j-1].first == i){
                edg[i] =2;
                l= v[j-1].second;
                r= v[j].second;
                j++;
            }
            else{
                edg[i]=1;
            }
            j++;
        }

        if(edg[i] == 2){
            sib[l]=1;
            sib[r]=1;
        }
    }

    // for(ll i=)
}