//https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

#include<iostream>
using namespace std;

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int> result;
        //base case
        if(root==NULL) return result;
        map<int, int> topNode;
        queue<pair<Node*,int>>q;
        
        q.push(make_pair(root, 0));
        while(!q.empty()){
            pair<Node* , int> frontval = q.front();
            q.pop();
            
            Node* node = frontval.first;
            int hd = frontval.second;
            
            if(topNode.find(hd) == topNode.end()){
                topNode[hd] = node->data;
            }
            if(node->left) q.push(make_pair(node->left, hd-1));
            if(node->right) q.push(make_pair(node->right, hd+1));
        }
        for(auto i : topNode){
            result.push_back(i.second);
        }
        return result;
    }
};