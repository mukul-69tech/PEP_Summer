//https://leetcode.com/problems/binary-tree-right-side-view/description/

#include<iostream>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans; 
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
         while(!q.empty()){
            int levelsize = q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode* frontNode = q.front();
                q.pop();

                if(i==levelsize-1){
                    ans.push_back(frontNode->val);
                }

                if(frontNode->left != NULL){
                    q.push(frontNode->left);
                }

                 if(frontNode->right != NULL){
                    q.push(frontNode->right);
                }
        
         }
    }
    return ans;
    }
};