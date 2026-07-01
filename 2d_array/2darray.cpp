#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    //row wise input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j]; 
        }
    }

    //column wise input
   // for(int i=0;i<m;i++){
     //   for(int j=0;j<n;j++){
       //     cin>>arr[j][i];
        //}
    //}
    

    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}