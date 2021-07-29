// https://www.codechef.com/submit/CV
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		ll n;
		string str;
		cin>>n;
		cin>>str;
		ll cnt=0;
		for(ll i=1;i<n;i++){
			if((str[i-1]!='a'&& str[i-1] !='e'&&str[i-1]!='i'&& str[i-1]!='o'&&str[i-1]!='u')){
				if (str[i]=='a'|| str[i] =='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
				cnt++;
				// cout<<str[i-1]<<" ";
			}
		}
		}
		cout<<cnt<<"\n";
	}
} 

