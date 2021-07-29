#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int power(int x, unsigned int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

long long getcnt (ll arr[], ll n ){
    ll cnt=0;
        for(ll i=0;i<n;i++){
            if(arr[i]==n){
                cnt=arr[i];
                break;
            }
            else if(arr[i]>n){
                cnt=arr[i-1];
                break;
            }
        }
    
    // cout<<"fun "<<cnt<<"\n";
    return cnt;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    ll arr[100000];
    for(ll i=0;i<100000;i++){
        arr[i] = power(2,i);
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sol=0;
        ll cnt = 0;
        cnt = getcnt(arr,n);
        ll temp = n-cnt;
        // cout<<"first"<<cnt;
        sol++;
        while (temp > 2){
            cnt = getcnt(arr,temp);
            temp = temp-cnt;
            sol++;
        }
        if (temp == 1 || temp == 2 ){
            sol++;
        }
        cout<<sol<<"\n";
    }
}