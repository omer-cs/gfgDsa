// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define endl '\n'
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

void printArray(vector<int>& arr) {
    for(auto i: arr) {
        cout<<i<<' ';
    }
    cout<<endl;
}
/* Function to merge two arrays and return merged array

vector<int> normalMerge(vector<int> arr, vector<int> brr) {
    int m = arr.size(), n = brr.size();
    vector<int> result(m+n);
    int i=0, j=0, k=0;
    while(i!=m && j!=n) {
        if(arr[i] <= brr[j]) {
            result[k++] = arr[i++];
        }
        else {
            result[k++] = brr[j++];
        }
    }
    while(i!=m) {
        result[k++] = arr[i++];
    }
    while(j!=n) {
        result[k++] = brr[j++];
    }
    return result;
}
*/

void merge(vector<int>& arr, int low, int mid, int high) {
    int m = mid - low + 1, n = high - mid;
    vector<int> left(m), right(n);
    for(int i=0; i<m; ++i) left[i] = arr[low + i];
    for(int j=0; j<n; ++j) right[j] = arr[mid + 1 + j];

    int i=0, j=0, k=low;
    while(i<m && j<n) {
        if(left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        else {
            arr[k++] = right[j++];
        }
    }
    while(i<m) {
        arr[k++] = left[i++];
    }
    while(j<n) {
        arr[k++] = right[j++];
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if( r>l) {  // this condition makes sure that there are atleast two elements in array
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    fast_cin();

    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &i : arr) {        // range-based for loop to take input
        cin>>i;
    }
    /* Passing vector at compile time inside of a function
    vector<int> result = normalMerge({10, 15, 20}, {5, 6, 6, 15});
    vector<int> result = normalMerge(*new vector<int> {10, 15, 20}, *new vector<int>{5, 6, 6, 15});
    */
    mergeSort(arr, 0, n-1);
    printArray(arr);
    return 0;
}