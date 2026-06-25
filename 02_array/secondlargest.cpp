//https://www.geeksforgeeks.org/problems/second-largest3735/1

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = INT_MIN, s_largest = INT_MIN;
        
        for(int i : arr){
            if(i > largest){
                s_largest = largest;
                largest = i;
                
            }
            else if(i > s_largest && i < largest){
                s_largest = i;
            }
        }
        return s_largest == INT_MIN ? -1 : s_largest;
    }
};