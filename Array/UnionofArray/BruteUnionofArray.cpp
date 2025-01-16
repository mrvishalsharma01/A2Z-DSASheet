// Brute Force approach
//Take a set data structure and go across the array and insert in a2 array 
//now declare the union size

#include <bits/stdc++.h>
using namespace std;

// Function to compute the union of two sorted arrays
vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size(); // Size of the first array
    int n2 = b.size(); // Size of the second array

    set<int> st; // Set to store unique elements

    // Insert elements of the first array into the set
    for (int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }

    // Insert elements of the second array into the set
    for (int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }

    // Convert the set into a vector to return the sorted union
    vector<int> temp;
    for (auto it : st) {
        temp.push_back(it);
    }
    return temp; // Return the union as a vector
}

int main() {
    int n = 10, m = 7; // Sizes of the two arrays

    // Input arrays
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    // Convert arrays to vectors to pass them to the function
    vector<int> vec1(arr1, arr1 + n);
    vector<int> vec2(arr2, arr2 + m);

    // Get the union of the two arrays
    vector<int> Union = sortedArray(vec1, vec2);

    // Output the union
    cout << "Union of arr1 and arr2 is: ";
    for (auto &val : Union) {
        cout << val << " ";
    }
    return 0;
}
