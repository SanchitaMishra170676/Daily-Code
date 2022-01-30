#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll sum_n(ll n){
    ll sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    ll t;
    cin>>t;
    vector<ll> v;
    while(t--){
        ll temp; cin>>temp;
        v.pb(temp);
    }
     stack<ll> stk;
    map<ll,ll> mp;
    ll n=v.size();
    stk.push(0);
    
    for(ll i=1;i<n;i++){


        
        while(stk.empty()== false && sum_n(v[stk.top()])<=sum_n(v[i])){
            if(sum_n(v[stk.top()])==sum_n(v[i])){
                if( v[stk.top()]<v[i])
                    { 
                        mp[stk.top()]=  v[i];
                       stk.pop();
                       continue;
                   }

                else{
                    break;
                }
            }
            
            mp[stk.top()]=  v[i];
                       stk.pop();
        }
        
        stk.push(i);
        
    }
    
    while(stk.empty()== false){
        mp[stk.top()]=-1;
        stk.pop();
    }
    
    
    for(auto it: mp){
        cout<<it.second<<" ";
    }
    
    return 0;
    
    
    
}