//https://leetcode.com/problems/number-of-provinces/description/

#include<iostream>
using namespace std;

class Solution {
public:
         //create a visited array
        //loop through every city
        //if city is not visited, start DFS from it
        //DF marks all directly and indirectly connected cities as visited
        //increse the provience count after each dfs call
        //return total number of provience 

    void dfsHelper(int city, vector<vector<int>>& isconnected, vector<bool> &visited){
        visited[city] = true;

        for(int neighbour = 0; neighbour < isconnected.size(); neighbour++){
            if(isconnected[city][neighbour]== 1 && !visited[neighbour]){
                dfsHelper(neighbour, isconnected, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isconnected) {
        int n = isconnected.size();

        vector<bool> visited(n, false);
        int provienceCount = 0;

        for(int i =0;i<n;i++){
            if(!visited[i]){
                dfsHelper(i, isconnected, visited);
                provienceCount++;
            }
            
        }
        return provienceCount;
        
    } 
};