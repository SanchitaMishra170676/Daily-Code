#include <bits/stdc++.h>
#define ll long long
#define pb push_back 
#define int long long
using namespace std;

vector<bool> prime(100001,1);

void sieveprime()
{
    ll n=100000;
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    prime[1]=0;
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	sieveprime();
	while(t--){
		ll x;
		cin>>x;
		if(prime[x]){
			cout<<"Prime\n";
		}
		else{
			cout<<"Not Prime\n";
		}
	}
} 