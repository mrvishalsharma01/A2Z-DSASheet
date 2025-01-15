// Optimal Approach Intution
// To optimise the code we are using two pointer i and j were we will move j 
// till we don't get a number arr[j] which is different from arr[i] 
// as we will get the unique number we will increase the i pointer and update its value by arr[j]

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n){
    int i=0; 
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}


int main(){
    int n;
    cin>>n; 

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The unique elements are "<<removeDuplicates(arr,n)<<endl;
}
