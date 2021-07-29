#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define int long long
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *start = NULL;

void insert_at_beginning(ll n){
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = n;
	if(start==NULL){
		// cout<<"strt="<<start<<"\n";
		temp->next = NULL;
		start=temp;
	}
	else{
		temp->next=start;
		start=temp;
	}
}

void print_list(){
	if(start == NULL){
		cout<<"List is Empty \n";
		return;
	}
	struct node *ptr;
	ptr = start;

	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<"\n";
}

void print_rev(struct node *ptr){
	if(ptr == NULL){
		cout<<"Empty List";
	}
	if(ptr->next == NULL){
		cout<< ptr->data<<" ";
		return;
	}

	 print_rev(ptr ->next);
	cout<<ptr->data<<" ";
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    insert_at_beginning(5);
    insert_at_beginning(15);
    insert_at_beginning(25);
    insert_at_beginning(35);
    insert_at_beginning(45);
    print_list();
    print_rev(start);

} 


