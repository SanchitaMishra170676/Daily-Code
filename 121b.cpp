#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;


signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		ll n = str.length();
	ll i, flag=0, sum=0;
	for(i= n-2;i>=0;i--){
		sum=int(str[i])-48 + int(str[i+1])-48;
		watch(sum);
		if(sum>9){
			flag=1;
				break;
		}
	}

	
	string ans="";
	if(flag){
		if(i>0){
			ans+=str.substr(0,i);	
			ans+=to_string(sum);
			ans+=str.substr(i+2,n);
		}
		else{
			ans+=to_string(sum);
			ans+=str.substr(2,n);
		}
	}


	else{
		sum=str[0]+str[1]-48-48;
		ans+=to_string(sum);
		ans+=str.substr(2,n);
	}	

		cout<<ans<<"\n";


	}
} 