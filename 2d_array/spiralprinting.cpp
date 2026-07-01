#include<iostream>
using namespace std;

void spiralprint(int arr[][4], int row, int col){
    int toprow = 0;
    int bottomrow = row - 1;
    int leftcol = 0;
    int rightcol = col -1;

    while(toprow <= bottomrow && leftcol <= rightcol){
        for(int i=leftcol; i <= rightcol; i++){
            cout<< arr[toprow][i] << " ";
        }
        toprow++;

        //print right col
        for(int i = toprow ; i<=bottomrow;i++){
            cout<<arr[i][rightcol]<<" ";
        }
        rightcol--;

        if(toprow<=bottomrow){
            for(int i = rightcol;i>=leftcol;i--){
                cout<<arr[bottomrow][i]<<" ";
            }
            bottomrow--;
        }
        if(leftcol<=rightcol){
            for(int i=bottomrow;i>=toprow;i--){
                cout<<arr[i][leftcol]<<" ";
            }
            leftcol++;
        }

        }
    }

    int main(){
        int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        spiralprint(arr,4,4);
    }