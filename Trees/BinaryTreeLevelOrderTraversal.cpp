//https://leetcode.com/problems/binary-tree-level-order-traversal/description/

#include<iostream>
using namespace std;



class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int levelsize = q.size();
            vector<int> levelElements;

            for(int i=0; i<levelsize; i++){
                TreeNode* frontNode = q.front();
                q.pop();

                levelElements.push_back(frontNode->val);

                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            result.push_back(levelElements);
        }
        return result;


    }
};