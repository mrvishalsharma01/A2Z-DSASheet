// Brute Force Approach
// The Idea is very simple we will start with the element at the 0th index, and compare with the future element.
// Like wise traverse the whole __ARRAY_OPERATORSIf any of the picked elements is greater than its future elements retrun false

// Time complexity :- o(n^2)
// Space Complexity:- o(1)

#include <bits/stdc++.h>
using namespace std;

bool isCheckSortedArray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i])
            return false;
        }
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

cout<<"The element is sorted "<< (isCheckSortedArray(arr1,n) ? "true" : "false")<<endl;

return 0;
}