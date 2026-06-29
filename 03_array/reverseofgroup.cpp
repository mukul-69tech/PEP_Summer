//https://leetcode.com/problems/maximum-subarray/

#include<iostream>
#include<vector>
using namespace std;


class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        for(int i=0;i<n;i += k){
            int start = i;
            int end = min(i + k -1, n - 1);
            
            while(start < end){
                swap(arr[start++],arr[end--]);
            }
        }
        
    }
};