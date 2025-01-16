//Optimal Aproach is 
// Reverse the array till arr+d;
//reverse the array a+d to a+n
//reverse the whole array a, a+n

//Time Complexity:- O(n)
//Space Complexity:-  O(1)

#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d){
    reverse(arr,arr+d);// reverse the first part i.e 0 to d
    reverse(arr+d, arr+n);// reverse the second part i.e d to n-1
    reverse (arr, arr+n); // reveres the whole array 
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