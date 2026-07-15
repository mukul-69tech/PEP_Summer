//https://leetcode.com/problems/asteroid-collision/description/

#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;

        for(int i : asteroids){
            bool alive = true;

            while(alive && !st.empty() && st.top() > 0 && i < 0){
                if(st.top() < abs(i)){
                    st.pop();
                }
                else if(st.top() == abs(i)){
                    st.pop();
                    alive = false;

                }
                else {
                    alive = false;
                }
            }
            if(alive) st.push(i);
        }
            int size = st.size();
            vector<int> ans(st.size());
            for(int i= size-1; i>=0; i--){
                ans[i] = st.top();
                st.pop();
            }
            return ans;
        }
        
    
};