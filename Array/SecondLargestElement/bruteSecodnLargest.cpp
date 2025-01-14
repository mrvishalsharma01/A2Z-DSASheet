//Solution Sorting 
// Intutiion:- First of all we need to sort the array and check for the last second element which will always be the second largest element but
// the array should not contain any duplicate element 

// Approach:-
// Sort the array element in ascending order
// Check that there is no dupicate element in an array
// Now the n-2 element will always be the second largest element 

// Time Complexity:- O(n*log n)
// Space Complexity:- O(n)

#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr, int n){
    sort(arr.begin(),arr.end());
    return arr[n-2];
}

int main(){

    int n;
    cin>>n;

    vector<int>arr1(n);
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    
    cout<<"The second Largest element in an array is "<<secondLargest(arr1,n);

}
