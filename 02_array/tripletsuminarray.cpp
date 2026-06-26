//https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
          sort(arr.begin(), arr,end());

        for(int i=0;i<arr.size()-2;i++){
            int j = i+1;
            int k = arr.size()-1;

            while(j<k){
                int sum = arr[i] + arr[j] + arr[k];
                if(sum==target) return true;
                if(sum<target) j++;
                else k--;
            }
        }
        return false;
        
    }
        
    
};