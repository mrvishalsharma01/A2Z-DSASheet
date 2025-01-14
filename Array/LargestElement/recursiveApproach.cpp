// Approach Intution
// Here we can create a max variable and initialize it with arr[0]
// Use a for loop and compare it with other element of the array
// If any element is greater than the max value, update max value with the element value
// Print the max variable

#include <bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
    int max=arr[0];
    for(int i=0; i<n; i++){
         if(max<arr[i])
         max=arr[i];
    }
    return max;
}

int main(){

    int n;
    cin>>n;

    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Largest element in array "<<largestElement(arr1,n);
}