#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

// Function for serve operation
void SERVE(deque<string> &queue){
	if(queue.size()>0){ 
	queue.pop_front();
	}
}

// function for friend operation 
void FRIEND(deque<string> &queue){
	string new_person, person;
	cin>>new_person>>person;
	auto it = queue.begin();
	for(; it != queue.end(); ++it){	
		if(*(it) == person){
			++it;
			queue.insert(it, new_person);
		}
	}
}

// function for VIP operation
void VIP(deque<string> &queue){
	string new_person;
	cin>>new_person;
	queue.push_front(new_person);
}

// funcction to print deque
void printdeque(deque<string> &queue){ 
	auto it = queue.begin();
	for(; it != queue.end(); ++it){
		cout<<*it<<" ";
	}
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t; 
	cin>>t;
	deque<string> queue;
	while(t--){
		string personInQueue;
		cin>>personInQueue;
		queue.push_back(personInQueue);
	}
	cin>>t;
	while(t--){
		string option;
		cin>>option;
		if(option == "SERVE"){
			SERVE(queue);
		}
		else if(option == "FRIEND"){
			FRIEND(queue);
		}
		else{
			VIP(queue);			
		}
	}
	printdeque(queue);
}

