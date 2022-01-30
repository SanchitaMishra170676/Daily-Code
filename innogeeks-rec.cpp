
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

ll cnt=0;
void printArray(vector<ll> arr, ll n)
{
	for (ll i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void checksum(vector<ll> arr, ll n, ll m, ll h)
{
	ll sum=0;
	for (ll i = 0; i < n; i++)
		sum+=arr[i];

	if(sum>m && sum<=h)
		{
			cnt++;
			// printArray(arr,n);
		}
}

void printSubsequences(vector<ll> arr, ll index,
					vector<ll> subarr, ll m,ll h)
{
	if (index == arr.size())
	{
		ll l = subarr.size();

		if (l != 0)
			checksum(subarr, l,m ,h);
	}
	else
	{
		printSubsequences(arr, index + 1, subarr,m,h);

		subarr.push_back(arr[index]);

		printSubsequences(arr, index + 1, subarr,m,h);
	}
	return;
}
int main()
{
	vector<ll> arr;
	vector<ll> b;

	ll t;
	ll sum=0;
	cin>>t;
	while(t--){
		ll x;
		cin>>x;
		sum+=x;
		arr.pb(x);
	}
	// watch(sum);
	ll m,h;
	cin>>m>>h;

	cnt=0;
	printSubsequences(arr, 0, b,m,h);
	cout<<cnt<<"\n";
	return 0;
}


