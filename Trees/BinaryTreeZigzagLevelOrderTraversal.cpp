//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*>q;
        q.push(root);
        bool leftToright = true;

        while(!q.empty()){
            int levelsize = q.size();
            vector<int> levelelements;

            for(int i =0;i<levelsize;i++){
                TreeNode* frontNode = q.front();
                q.pop();
                levelelements.push_back(frontNode->val);

                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            if(!leftToright){
                reverse(levelelements.begin(), levelelements.end());
            }
            result.push_back(levelelements);
            leftToright = !leftToright;

        }

        return result;
    }
};