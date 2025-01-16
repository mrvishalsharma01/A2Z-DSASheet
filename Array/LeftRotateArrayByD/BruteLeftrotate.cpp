//Brute force Approach 

// What we can do here is we can take a temp array and put it into the array 
// Now here shift is happening i-d place i.e a[i-d]=ar[i]
// Put back temp array from n-k

#include <bits/stdc++.h>
using namespace std;

void leftRotateByD(int arr[], int n, int d){
    d=d%n; // why we are doing mod because we will get the same array after rotation suppose 7th rotation 
    //we will get back the same array
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i]=arr[i]; // storing the d elements 
    }
    for(int i=d; i<n; i++){
        arr[i-d]=arr[i]; // shifting the remaing element 
    }
    for(int i=n-d; i<n; i++){
        arr[i]=temp[i-(n-d)]; //adding the d elements in the end
    }
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

    leftRotateByD(arr,n,d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}