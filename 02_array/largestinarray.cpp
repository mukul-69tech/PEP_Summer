//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        
            int max = arr[0];
            
            for(int i=1;i<arr.size();i++){
                if(arr[i]>max){
                max = arr[i];
            }
            
            }
            return max;
        }
    
};