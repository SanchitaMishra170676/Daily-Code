#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream txt1,txt2;
	txt1.open("text1.txt");
	txt2.open("text2.txt");
		string  line1,line2;
		
		ll c1=0,c2=0,flag=0;

		while (!txt1.eof()) {
        getline(txt1, line1); 
        //cout<<line1<<"\n";
        c1++;    
    	}

    	while (!txt2.eof()) {
        getline(txt2, line2); 
         //cout<<line2<<"\n";
        c2++;    
    	}


		txt1.close();
		txt2.close();
		
	txt1.open("text1.txt");
	txt2.open("text2.txt");
	if(c1!=c2){
		cout<<"Files don't have same content\n";
	}

	else{
		while (!txt1.eof()) {
        getline(txt1, line1); 
        getline(txt2,line2);
        cout<<line1<<"\n"<<line2<<"\n";
        if(line1!=line2){
        		flag=1;
        		cout<<"yuf";
        		break;
        }  
    	}
	}

	if(flag){
		cout<<"Files don't have same content\n";
	}
	else{
		cout<<"Files have same content\n";
	}

} 