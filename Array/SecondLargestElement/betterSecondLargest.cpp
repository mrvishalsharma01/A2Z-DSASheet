// Intution 
// Find the largest element in single traversal
// After this we once again traverse the array and find the element that is just greater than the smallest element we just found
// Similarly we would find the largest element wheich is just smaller than the largest element we just found 

// Time Complexity:- o(n)
// space Compelxity:- o(1)

#include <bits/stdc++.h>
using namespace std;

int secondLargestEle(vector<int>&arr, int n){
    int large=INT_MIN, secondLargest=INT_MIN;
    int i; 
    for(i=0; i<n; i++){
        large=max(large,arr[i]);
    }
    for(i=0; i<n;i++){
        if(arr[i] > secondLargest && arr[i]!=large)
        secondLargest=arr[i];
    }
    return secondLargest;
}

int main(){
    int n;
    cin>>n;

    vector<int>arr1(n);
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"The second largest element in an array is "<<secondLargestEle(arr1,n);

}
