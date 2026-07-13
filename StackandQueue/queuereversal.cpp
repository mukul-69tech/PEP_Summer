//https://www.geeksforgeeks.org/problems/queue-reversal/1

#include<iostream>
#include<stack>
using namespace std;

class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        if(q.empty()) return;
        
        int temp = q.front();
        q.pop();
        reverseQueue(q);
        
        q.push(temp);
        
    }
};