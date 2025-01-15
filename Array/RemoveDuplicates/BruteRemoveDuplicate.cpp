// Brute Force Approach
// When we think of unique elements the first thing that comes to our mind is set, hashset
// We can declare a hashset
// run a for loop from starting to the end 
// put every element of the set in the array from the starting of array  
// now return k

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[],int n){
    set<int>set;
    for(int i=0; i<n; i++){
        set.insert(arr[i]);
    }
    int k=set.size();
    int j=0;
    for(int x:set){
        arr[j++]=x;
    }
    return k;
}

int main(){
    int n;
    cin>>n;

    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"The unique elements are "<<removeDuplicates(arr1,n)<<endl;

}