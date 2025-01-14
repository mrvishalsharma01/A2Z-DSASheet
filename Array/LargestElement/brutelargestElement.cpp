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