#include<iostream>
using namespace std;


bool binarysearch(int arr[], int left, int right, int key){
    if(left>right) return false;
    int mid = left + (right - left)/2;

    if(arr[mid] < key){
        return binarysearch(arr,mid+1,right,key);
    }else {
        return binarysearch(arr,left,mid-1,key);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int left = 0;
    int right = n-1;

    if(binarysearch(arr,left,right,key)){
        cout<<"found"<<endl;
    }else {
        cout<<"not found"<<endl;
    }
    return 0;

    
}