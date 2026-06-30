//https://leetcode.com/problems/koko-eating-bananas/description/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
     int findmax(vector<int>&piles){
        int maximum = INT_MIN;
        for(int i=0;i<piles.size();i++){
            maximum = max(maximum,piles[i]);
        }
        return maximum;
    }

    long long calculate(vector<int>& piles, int k){
        long long totalhour = 0;
        for(int i=0;i<piles.size();i++){
            totalhour += ceil(double(piles[i])/k);
        }
        return totalhour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findmax(piles);
        int ans = high;

        while(low<=high){
            int mid = low + (high-low)/2;

            long long totalhour = calculate(piles,mid);
            if(totalhour <= h){
                ans = mid;
                high = mid - 1;

        }else {
            low = mid + 1;
        }
        }
        return ans;
        
    }
};