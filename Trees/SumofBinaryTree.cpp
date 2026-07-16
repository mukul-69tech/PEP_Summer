//https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
}


class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(root==NULL) return 0;
        
        int ls = sumBT(root->left);
        int rs = sumBT(root->right);
        
        return root->data + ls + rs;
    }
};