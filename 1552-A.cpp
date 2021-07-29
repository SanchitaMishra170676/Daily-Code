#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

const int MAX_CHAR = 26;
 
string sortString(string &str)
{
	string s="";
    int charCount[MAX_CHAR] = {0};
    for (int i=0; i<str.length(); i++)
        charCount[str[i]-'a']++;   
     
    for (int i=0;i<MAX_CHAR;i++)
        {
        	for (int j=0;j<charCount[i];j++)
                    {
                    	s+= (char)('a'+i);
                    	// cout<<s;
                    }

        }

     return s;
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string str,temp;
		cin>>str;
		temp = str;
		str = sortString(str);
		ll cnt=0;
		for(ll i=0;i<n;i++){
			if(str[i] != temp[i])
			{
				cnt++;
			}
		}

		cout<<cnt<<"\n";

	}
} 

