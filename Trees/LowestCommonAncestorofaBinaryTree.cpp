//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/

#include<iostream>
using namespace std;

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;

        if(root == p || root == q) return root;
        TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);

        if(leftLCA && rightLCA){
            return root;
        }
        else if(leftLCA != NULL) return leftLCA;
        else return rightLCA;
    }
};