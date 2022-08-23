#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr) {
    for(int i=0; i<arr.size(); ++i)
        cout<<arr[i]<<' ';
    cout<<'\n';
}

void reverseArray(vector<int>& arr) {
    int n = arr.size();
    for(int i=0; i<n/2; ++i) {
        swap(arr[i], arr[n-1 -i]);
    }
    printArray(arr);
}

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    reverseArray(arr);
}