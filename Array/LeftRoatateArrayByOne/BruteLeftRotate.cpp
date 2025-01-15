// Brute Force Approach
// The first approach that comes to my mind when i see this type of problem is 
// we can make a new array and assing the value form previous array to that with 
// till n-1 and we will store that in temp variable in last

//Time Complexity:- O(n)
//Space Complexity:-  O(n)

#include <bits/stdc++.h>
using namespace std;

void leftRoatateArray(int arr[], int n){
    int temp[n];
    for(int i=1; i<n; i++){
        temp[i-1]=arr[i];
    }
    temp[n-1]=arr[0];
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n; 

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    leftRoatateArray(arr,n);

}



