#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;



vector<vector<int>> mp(21,vector<int>(21));
int ans=1;


void printSubsequences(vector<int> arr, int index,
                    vector<int> subarr)
{
    
    if (index == arr.size())
    {
        int l = subarr.size();

        
        if (l != 0)
           ans++;
    }
    else
    {

        printSubsequences(arr, index + 1, subarr);

        int flag=1;
        for(int i=0;i<subarr.size();i++){
            if(mp[subarr[i]][arr[index]]){
                flag=0;
            }
        }
        if (flag)
        subarr.push_back(arr[index]);
        else return;

        printSubsequences(arr, index + 1, subarr);
    }
    return;
}

signed main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,s;
    cin>>n>>s;
    vector<int> arr;
    for(int i=0;i<=n;i++){
        arr.pb(i);
    }

    for(int i=0;i<s;i++){
        ll a1,a2;
        cin>>a1>>a2;
        mp[a1][a2]=1;
    }
    vector<int> b;

    printSubsequences(arr, 0, b);

    if(n==0) ans=0;
    cout<<ans<<"\n";
    
}   

