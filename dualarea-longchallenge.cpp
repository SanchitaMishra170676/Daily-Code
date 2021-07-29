#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
// #define int long long
#define mod 1000000007
using namespace std;

bool sec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}

ll left_right(vector<pair<ll,ll>> v){

    sort(v.begin(), v.end());
    ll n = v.size();
    if(n==1){
        return 0;
    }
    vector<pair<ll,ll>> ht(n);
    ll max = LONG_MIN, min= LONG_MAX;
    for(ll i= n-1; i>=0;i--){
        if(v[i].second >max){
            max = v[i].second;
        }
        if(v[i].second <min){
            min= v[i].second;
        }
        ht[i].first=max;
        ht[i].second=min;
    }
    ll m=n-1;
    vector<ll> area(m);
    max = LONG_MIN, min= LONG_MAX;
    for(ll i=0;i<n-1;i++){
        if(v[i].second>max){
            max = v[i].second;
        }
        if(v[i].second<min){
            min= v[i].second;
        }
        ll l1= v[i].first-v[0].first;
        ll l2= v[n-1].first-v[i+1].first;
        ll h1= max-min;
        ll h2= ht[i+1].first - ht[i+1].second;
        ll a1= l1*h1;
        ll a2= l2*h2;
        // cout<<"area a1= "<<a1<<"area a2= "<<a2<<"\n";
        area[i]= a1+a2;
    }

    min= LONG_MAX;
    for(ll i=0;i<m;i++){

        if(area[i]<min){
            min=area[i];
        }
    }

    return min;
    // return 0;
} 

ll up_down(vector<pair<ll,ll>> v){
    sort(v.begin(), v.end(), sec);
    ll n = v.size();
    if(n==1){
        return 0;
    }
    vector<pair<ll,ll>> ln(n);

    ll max = LONG_MIN, min= LONG_MAX;
    for(ll i= n-1; i>=0;i--){
        // cout<<"vi= "<<v[i].first<<" "<<v[i].second<<"\n";
        if(v[i].first >max){
            max = v[i].first;
        }
        if(v[i].first <min){
            min= v[i].first;
        }
        ln[i].first=max;
        ln[i].second=min;
    }
    ll m=n-1;
    vector<ll> area(m);
    max = LONG_MIN, min= LONG_MAX;
    for(ll i=0;i<n-1;i++){
        if(v[i].first>max){
            max = v[i].first;
        }
        if(v[i].first<min){
            min= v[i].first;
        }
        ll h1= v[i].second-v[0].second;
        // cout<<"v[n-1]= "<<v[n-1].second<<" v[i+1]= "<<v[i+1].second<<"\n";
        ll h2= v[n-1].second - v[i+1].second;
        ll l1= max-min;
        ll l2= ln[i+1].first - ln[i+1].second;
        ll a1= l1*h1;
        ll a2= l2*h2;
        // cout<<"area a1= "<<a1<<"area a2= "<<a2<<"h1= "<<h1<<"h2= "<<h2<<"\n";
        area[i]= a1+a2;
    }

    min= LONG_MAX;
    for(ll i=0;i<m;i++){

        if(area[i]<min){
            min=area[i];
        }
    }

    return min;
}

int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    // cout<<"reached here\n";
    ll t; 
	cin>>t;
	while(t--){
		ll n;
        cin>>n;
        vector<pair<ll,ll>> v;
        while(n--){
            ll x,y;
            cin>>x>>y;
            v.pb({x,y});
        }

        ll larea = left_right(v);
        ll rarea = up_down(v); 
        ll min_area = min(larea, rarea);
        cout<<min_area<<"\n";
        // cout<<larea<<"\n";
	}
}