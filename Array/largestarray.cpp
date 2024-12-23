//Brute Force Approach
//Solution1: Sorting O(nlogn)
//Solution2: Using max variable TC: O(n) SC:O(1)


#include<iostream>
using namespace std;

int largest(int arr[], int n){
    int maxi=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>maxi)
        maxi=arr[i];
    }
    return maxi;

}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<largest(arr,n);
}

