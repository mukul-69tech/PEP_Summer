//https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

#include<iostream>
using namespace std;


class Solution {
  public:
  
    void dfsHelper(int node, vector<vector<int>>& adj, vector<bool> &visited, vector<int> &result){
        visited[node] = true;
        
        result.push_back(node);
        
        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                dfsHelper(neighbour, adj, visited, result);
            }
        }
        
    }
    
     vector<int> dfs(vector<vector<int>>& adj){
         int v = adj.size();
         vector<bool> visited(v,false);
         
         vector<int>result;
         
         dfsHelper(0, adj, visited, result);
         return result;
     }
};