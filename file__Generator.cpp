#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); // include 1 time only

ll rand(ll l,ll r)
{
	ll k = uniform_int_distribution<long long>(l,r)(rng);
	return k;
}

void funofdiv()
{
    ll n,m,x,y,z,i,j,k,l=0,sum=0,ans=0;
    n = rand(10000,100000);
    cout << n << "\n";
    for(i=1;i<=n;i++)
    {
        x = rand(1,1000);
        cout << x << " ";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n = 1;
    // cin >> n;
    // cout<<n<<"\n";
    while(n--)
    {
        funofdiv();
    }
    return 0;
}
