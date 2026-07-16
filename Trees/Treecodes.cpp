#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

}


void preorder(Node* root){
    //base case
    if(root==NULL) return;

    cout<< roott->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int countNodes(Node* root){
    if(root==NULL) return 0;
    
    int lc = countNodes(root->left);
    int rc = countNodes(root->right);
    return lc + rc + 1;
}

int main(){
    Node* root  new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Total number of nodes: " << countNodes(root) << endl;

    return 0;
}