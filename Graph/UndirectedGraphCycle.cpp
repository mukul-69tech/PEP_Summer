//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

#include<iostream>
using namespace std;

class Solution {
  public:
  bool bfsHelper(int start, vector<vector<int>> &adj, vector<bool> &visited){
      queue<int> q;
      unordered_map<int , int> parent;
      
      visited[start] = true;
      q.push(start);
      parent[start] = -1;
      
      while(!q.empty()){
          int frontNode = q.front();
          q.pop();
          
          for(int neighbour : adj[frontNode]){
              if(!visited[neighbour]){
                  visited[neighbour] = true;
                  q.push(neighbour);
                  parent[neighbour] = frontNode;
              }
              else if(parent[frontNode] != neighbour) return true;
          }
      }
      return false;
  }
    bool isCycle(int v, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(v);
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        vector<bool> visited(v, false);
        
        for(int i=0;i<v;i++){
            if(!visited[i]){
               if(bfsHelper(i, adj, visited)){
                   return true;
               } 
            }
        }
        return false;
    }
};