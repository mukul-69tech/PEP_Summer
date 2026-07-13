//https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

#include<iostream>
#include<stack>
using namespace std;

class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        
        if(k > q.size() || k <= 0){
            return q; 
        }
        
         stack<int>st;
        
        for(int i=0;i<k;i++){
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        int n = q.size() - k;
        for(int i= 0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};