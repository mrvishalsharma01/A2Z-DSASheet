//Optimal Approach
//To optimise the code what we can do here is we and assing the first element in temp variable 
// and print the value at time time of printing

//Time Complexity:- O(n)
//Space Complexity:-  O(1)

#include <bits/stdc++.h>
using namespace std;

void LeftRotateArr(int arr[],int n){
    int temp=arr[0];
    for(int i=0; i<n; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n; 

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    LeftRotateArr(arr,n);

}