#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
using namespace std;



class student{
	private:
		string Sname;
		int marks[5]={0};
		int Total, Tmax;
	public:
		void assign(string name, int arr[5]){
			Sname=name;
			for(int i=0;i<5;i++)
				marks[i]=arr[i];
		}

		void compute(){
			Total=0;
			Tmax=0;
			for(auto it: marks)
				{
					Total+=it;
					Tmax=max(Tmax,it);
				}
		}

		void display(){
			cout<<"Name: "<<Sname;
		}

};


signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    student Sanchita;
    string name;
    int arr[5];
    cin>>name;
    for(int i=0;i<5;i++){
    	cin>>arr[i];
    }
    Sanchita.assign(name,arr);
    Sanchita.compute();
    Sanchita.display();
} 