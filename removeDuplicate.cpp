#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr, int n) {
    for(int i=0; i<n; ++i)
        cout<<arr[i]<<' ';
    cout<<'\n';
}

void removeDuplicate(vector<int>& arr) {// pass vector as reference
    int size = 0;
    for(int i=1; i<arr.size(); ++i) {
        if(arr[i-1] != arr[i]) {
            arr[size+1] = arr[i];
            size++;
        }
    }
    printArray(arr, size+1);
}

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    removeDuplicate(arr);
}