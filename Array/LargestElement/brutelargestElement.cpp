// Solution1: Sorting
// Intuition:
// We can sort the array in ascending order, hence the largest element will be at the last index of the array. 

// Approach: 
// Sort the array in ascending order.
// Print the (size of the array -1)th index.

// Time Complexity: O(N*log(N))
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

int sortArray(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int main(){
    int n;
    cin>>n; 
    vector<int>arr1(n);
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"The Maximum element is "<<sortArray(arr1)<<endl;
}