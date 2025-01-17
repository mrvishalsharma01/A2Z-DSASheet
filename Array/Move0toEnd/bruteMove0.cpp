// Brute force approach
//we will make a temp array and push the item 

//Time Complexity:- O(n)
//Space Complexity:- O(n) 
#include <bits/stdc++.h>
using namespace std;

vector<int>movesZeros(vector<int>&a, int n){
    vector<int>temp;
    for(int i=0; i<n; i++){
        if(a[i]!=0)
         temp.push_back(a[i]);// adding a non 0 element to temp array
    }
    int nz=temp.size();//count the no of non zero element
    for(int i=0; i<n; i++){
        a[i]=temp[i];     //copu non zero element back to a
    }
    for(int i=nz; i<n; i++){
        a[i]=0;       //fill remaning position with a in zeros
    }
    return a;
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    movesZeros(arr,n);
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }

}