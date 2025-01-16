//The optimal approach to solve this problme is to use two pointer 

#include <bits/stdc++.h>
using namespace std;

vector<int>moveZeros(vector<int>&a, int n){
    int j=-1;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1)return a;
    for(int i=j+1; i<n; i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
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
    moveZeros(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}