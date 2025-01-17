//This is the optimal solution that we have to solve maximum consecutive ones 

//Time Complexity:- O(n)
//Space Complexity:- O(1)

#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int>&a, int n){
    int count=0; 
    int maxi=0;
    for(int i=0; i<n; i++){
        if(a[i]==1){
        count++;
        } else{
            count=0;
        }
        maxi=max(maxi,count);
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The Maximum element is "<<findMax(arr,n);
    return 0;
}