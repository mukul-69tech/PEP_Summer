#include<iostream>
using namespace std;

bool linearsearch(int arr[], int size, int key){

    if(size == 0) return false;

    if(arr[0] == key) return true;
    else {
        return linearsearch(arr+1,size-1,key)
    }

}

int main(){
    int myArr[] = {2, 4, 6, 8, 10};
    int size = 5;
    int key = 8;

    if(linearsearch(myArr, size, key)) {
        cout << "Element mil gaya!" << endl;
    } else {
        cout << "Element nahi mila." << endl;
    }

    return 0;

}