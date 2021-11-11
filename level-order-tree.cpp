#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

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
    cout.tie(NULL);
    vector<string> v;
    string x;
    while(cin>>x){
    	v.pb(x);
    }

    int	n=v.size();
    int k=0;

    for(int i=0;i<ceil(log2(n+1))-1;i++){
    	for(int j=0;j<fastpower(2,i);j++){
    		cout<<v[k]<<" ";
    		k++;
    	}
    	cout<<"\n";
    }




} 