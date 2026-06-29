//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int currsum = 0;
        int maxsum = 0;
        
        for(int i=0;i<k;i++){
            currsum += arr[i];
        }
        maxsum = currsum;
        
        for(int i=k;i<n;i++){
            currsum = currsum - arr[i-k] + arr[i];
            if(currsum > maxsum) maxsum = currsum;
        }
        return maxsum;
        
    }
};