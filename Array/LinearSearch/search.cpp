//search the element in array

#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int num){
    int i;
    for(int i=0; i,n; i++){
        if(arr[i]==num)
        return i;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   int num;
   cin>>num;

   cout<<"The index of element is "<<search(arr,n,num);
}