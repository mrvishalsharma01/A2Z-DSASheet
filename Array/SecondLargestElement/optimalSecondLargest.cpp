//  Optimal Approach
// In the better we are doing 2 pass traversal but here we need to do in single traversal 
// Now here if the current element is larger than update the second largest and large variable 
// Else if the current elemt is largest than second largest than we will updte the variable second large 

// Time Complexity:- o(n)
// space complexity:-  o(1)

#include <bits/stdc++.h>
using namespace std;

int secondLargestEle(int arr[], int n){
    int large=INT_MIN, secondLargest=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > large){
            secondLargest=large;
            large=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i] != large)
        secondLargest=arr[i];
    }
    return secondLargest;
}

int main(){
    int n;
    cin>>n; 

    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"The second largest element is "<<secondLargestEle(arr1,n)<<endl;
    
}
