#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

void funchita(ll n)
{
	ll i = 1;
	bool flag = false;
	
	while (i * (i + 1) < n * 2)
	{	
		ll X = i * (i + 1);	
		ll t = n * 2 - X;
		ll k = sqrt(t);
		if (k * (k + 1) == t)
		{
			flag = true;
			break;
		}
		i += 1;
	}
	
	if (flag)
		cout << "YES";
	else
		cout << "NO";
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    funchita(n);
} 






