//https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

#include<iostream>
#include<stack>
using namespace std;

class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
      stack<int> st;
      int halfsize = q.size()/2;
      
      //push the first half elements in stack
      
      for(int i =0; i<halfsize; i++){
          st.push(q.front());
          q.pop();
      }
      
      //enqueue back the stack elements
      while(!st.empty()){
          q.push(st.top());
          st.pop();
      }
      
      //dequeue the first elements of queue and enqueue them back
      for(int i=0; i<halfsize;i++){
          q.push(q.front());
          q.pop();
      }
      
      //again push the first half elements in stack
      for(int i =0;i<halfsize;i++){
          st.push(q.front());
          q.pop();
      }
      
      //interleave the elements of queue and stack
      while(!st.empty()){
          q.push(st.top());
          st.pop();
          q.push(q.front());
          q.pop();
      }
        
    }
};