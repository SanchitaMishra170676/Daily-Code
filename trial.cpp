#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

ll fastpower(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = fastpower(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}


signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout<<"hello";
}