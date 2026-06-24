//https://www.geeksforgeeks.org/problems/reverse-an-array/1

#include<iostream>
#include<vector>
using namespace std;


class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int start = 0;  int end = arr.size()-1;
        
        while(start < end){
            swap(arr[start],arr[end]);
            
            start ++ , end--;
        }
        
    }
};