//Optimal Aproach is 
// Reverse the array till arr+d;
//reverse the array a+d to a+n
//reverse the whole array a, a+n

#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d){
    reverse(arr,arr+d);
    reverse(arr+d, arr+n);
    reverse (arr, arr+n);
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;

    leftRotate(arr,n,d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}