#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;


string reverseString(string str)
{
 
    reverse(str.begin(), str.end());
 
    str.insert(str.end(), ' ');
 
    int n = str.length();
 
    int j = 0;
 
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            reverse(str.begin() + j,
                    str.begin() + i);
            j = i + 1;
        }
    }
 
    str.pop_back();
    return str;
}


string reverse_string(string str,ll init, ll p, ll skip){
    queue<string> q;
    string word="";
    for(ll i=init;i<=p;i++){
      word+=str[i];
      if(str[i]== ' ' || str[i]=='.' ){
        q.push(word);
        word="";
      } 
    }
    string temp="";
    while(q.size() > skip) {
      temp = temp + q.front();
      q.pop();
    }

    temp= reverseString(temp);
    temp+=" ";

    while(!q.empty()){
      temp += q.front();
      q.pop();
    }

    return temp;
}

signed main(void){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    string str;
    ll skip;
    getline(cin,str);
    cin>>skip;
    ll n= str.length();
    ll p=0,init=0;
    for(ll i=0;i<n;i++){
      if(str[i]=='.'){
        p=i;
         cout<<reverse_string(str,init,p,skip);
        init = p+2;
      }
   }
} 