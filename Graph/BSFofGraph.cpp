//https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

#include<iostream>
using namespace std;


class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int v = adj.size();
        vector<int> bfsResult;
        vector<bool> visited(v, false);
        
        queue<int> q;
        q.push(0);
        visited[0] = true;
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            
            bfsResult.push_back(front);
            
            for(auto neighbour : adj[front]){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
        return bfsResult;
    }
};