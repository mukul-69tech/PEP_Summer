//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int firstOcuurence(vector<int>&nums,int target){
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;

        while(left<=right){
            int mid = (left + right)/2;
            if(nums[mid]==target){
                ans = mid;
                right = mid - 1;

            } else if (nums[mid]>target){
                right = mid -1;
            }else{

              left = mid +1;
            }

        }
        return ans;
    }


    int lastOcuurence(vector<int>&nums,int target){
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;

        while(left<=right){
            int mid = (left + right)/2;
            if(nums[mid]==target){
                ans = mid;
                left = mid + 1;

            } else if (nums[mid]>target){
                right = mid -1;
            }else{

              left = mid +1;
            }

        }
        return ans;
    }

     
    vector<int> searchRange(vector<int>& nums, int target) {
        return{firstOcuurence(nums,target), lastOcuurence(nums,target)};
        
    }
};