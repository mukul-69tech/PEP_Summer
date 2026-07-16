//https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1

#include<iostream>
using namespace std;


class Solution {
  public:
    int height(Node* root) {
        // code here
        if(root == NULL) return -1;
        
        int lh = height(root->left);
        int rh = height(root->right);
        return 1 + max(lh,rh);
    }
};