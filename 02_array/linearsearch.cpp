#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        // Agar key mil gayi aur woh 20 se badi hai
        if(arr[i] == key && arr[i] > 20){
            return arr[i] * arr[i];
        }
    }
    // Agar poore loop mein key nahi mili ya condition match nahi hui
    return -1; 
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int key;
    cin >> key;

    cout << linearsearch(arr, n, key);
    return 0;
}