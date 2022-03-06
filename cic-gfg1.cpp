#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
#define ff first
#define ss second
#define pi 3.14159265358979323846
// #define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";   
using namespace std;
ll memory = 0, tim = 0, ttt = 0;
#ifndef ONLINE_JUDGE	
#define cout if(++memory && memory>210000){cout<<"\nOUT OF MEMORY";exit(0);}else cout
#define ttt {tim++;if(tim>450000000){cout<<"\nEXIT INFINTY LOOP";exit(0);}}
#endif

bool checkone(ll a, ll b){
	if(a+1==b)
		return true;
	ll x= a|b;
	if((a|x)==b)
		return true;
	return false;
}

bool checktwo(ll a, ll b){
	if(a+2==b)
		return true;
	a++;
	ll x=a|b;
	if((a|x)==b)
		return true;
	a--;
	b--;
	x=a|b;
	if((a|x)==b)
		return true;
	b+=2;

	x=a|b;
	if((a|x)==b)
		return true;
	return false;
}

void funchita(){
 ll a,b;
 cin>>a>>b;
 if(b<=a){
 	cout<<a-b<<"\n";
 	return;
 }
 	
if(checkone(a,b)){
	cout<<1<<"\n";
	return;
}

if(checktwo(a,b)){
	cout<<2<<"\n";
	return;
}

cout<<3<<"\n";
}
		

signed main(void){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
	cin>>t;	
	while(t--){ 
		funchita();
	}
} 