// Optimal Approach

// Here we will check with the previous element if the previous element is smaller than or equal to the curent element
// Time complexity:-  o(n)
// space complexity:- o(1)

#include <bits/stdc++.h>
using namespace std;

bool isSortedArray(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1])
        return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    
    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    cout<<"The array is "<<(isSortedArray(arr1,n) ? "Sorted" : "NotSorted") <<endl;
}