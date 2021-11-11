#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back 
#define int long long
#define pi 3.14159265358979323846
#define watch(xxx) cerr<<(#xxx)<<" is "<<xxx<<"\n";
using namespace std;

struct Node{
	int key;
	struct Node *left, *right;
	
	 Node(int k){
		key=k;
		left=right=NULL;
	}
};

void inorder(struct Node *node){
	if(node==NULL) return;
	inorder(node->left);
	cout<<node->key<<" ";
	inorder(node->right);
}

void preorder(struct Node *node){
	if(node== NULL) return;
	cout<<node->key<<" ";
	preorder(node->left);
	preorder(node->right);
}

void postorder(struct Node *node){
	if(node == NULL) return;
	postorder(node->left);
	postorder(node->right);
	cout<<node->key<<" ";
}


int sum( struct Node *node){

	if(! node) return 0;
	int sleft = sum(node->left);
	int sright = sum(node->right);
	return sleft+sright+node->key;
}

int size( struct Node *node){

	if (!node) return 0;
	int left = size(node->left);
	int right = size (node-> right);
	return left+right+1;

}


int maxel(struct Node *node){
	if(!node) return INT_MIN;

	int lmax=maxel(node->left);
	int rmax=maxel(node->right);
	return max(max(lmax,rmax),node->key);

}

int height(struct Node *node){
	if(!node) return 0;

	int lh = height(node->left);
	int rh = height(node->right);
	return max(lh,rh)+1;
}


void printcurrlevel(struct Node *root, int level){
	if(root == NULL){
		return;
	}
	if(level == 0){
		cout<<root->key<<" ";
	}
	else{
		printcurrlevel(root->left,level-1);
		printcurrlevel(root->right, level-1);
	}
}

void lot(struct Node *root){
	int ht = height(root);
	for(int i=0;i<ht;i++){
		printcurrlevel(root,i);
		cout<<"\n";
	}
}


bool path(struct Node *node, int data){
	if(! node){
		return false;
	}
	if(node->key == data){
		cout<<node->key<<" ";
		return true;
	}

	bool left=path(node->left,data);
	if(left){
		cout<<node->key<<" ";
		return true;
	}

	bool right=path(node->right,data);
	if(right){
		cout<<node->key<<" ";
		return true;
	}

	return false;
}

signed main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Node* root = new Node(50);
    root->left= new Node(95);
    root->right= new Node(75);
    root->left->left= new Node(12);
    root->left->right=new Node(37);
    root->left->right->left=new Node(30);
    root->right->left=new Node(62);
    root->right->right= new Node(80);
    root->right->left->right= new Node(75);


    // cout<<"pre-order= ";
    // preorder(root);
    // cout<<" inorder= ";
    // inorder(root);
    // cout<<" postorder= ";
    // postorder(root);

    // cout<<"Size= "<<size(root);
    // cout<<"Sum= "<<sum(root);

    // cout<<"MAX= "<<maxel(root);cout<<"MAX= "<<maxel(root);

    // cout<<"Height= "<<height(root);
    // cout<<"Level order traversal\n";lot(root);
    cout<<"Path:\n";path(root,30);

} 
