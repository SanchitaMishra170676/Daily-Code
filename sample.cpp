#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};
 
Node *head;

void LinkedList(){
            head = NULL;
        }

void display(){
    Node *n = head;
    while(n!= NULL){
        cout <<n->data<<" ";
        n= n->next;
    }
    cout << "\n";
}
void insertBeg(){
    cout << "Enter the item to be inserted:\n";
    int item;
    cin >> item;
      Node *newNode;
     newNode = new Node();
     newNode -> data = item;
     newNode -> next = head;
     head = newNode;
}

void insertEnd(){
    cout << "Enter the item to be inserted:\n";
    int item;
    cin >> item;
      Node* newNode = new Node();
      newNode->data = item;
      newNode->next = NULL;
      // cout<<"head="<<head; 
      if(head == NULL) {
        head = newNode;
      }
       else {
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        
       temp->next = newNode;
      }   
      
}
void pop(){
    head = head ->next;
    cout << "Pop method executed.\n";
}
int main(){

    head = new Node();
       int choice =0;
       LinkedList();
         
     while(choice!=4){
        // cout<< "Enter your choice:\n1:Push\n2:Display\n3:Pop\n4:Exit\n";
        cin >> choice;
        switch(choice){
            case 1: insertEnd();
            break;
            case 2:display();
            break;
            case 3:pop();
            break;
            case 4: break;
            break;
            default: cout << "Invalid Choice!";
         }
     }
}