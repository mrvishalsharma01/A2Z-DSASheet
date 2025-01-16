//The optimal approach to solve this problme is to use two pointer 

#include <bits/stdc++.h>
using namespace std;

vector<int>moveZeros(vector<int>&a, int n){
    int j=-1;// Index to track the position of the first zero in the array.
    for(int i=0; i<n; i++){
        if(a[i]==0){// If a zero is found,
            j=i;// store its index in 'j'.
            break;// Exit the loop as we only need the first zero's index.
        }
    }
    if(j==-1)return a; // If no zeros are found, the array is already fine; return as is.
    for(int i=j+1; i<n; i++){
        if(a[i]!=0){// If the current element is non-zero,
            swap(a[i],a[j]);// Swap it with the zero at index 'j'.
            j++;// Move 'j' to the next zero's position.
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