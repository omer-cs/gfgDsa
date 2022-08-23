#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void printArray(vector<int> arr, int n) {
    for(int i=0; i<n; ++i)
        cout<<arr[i]<<' ';
    cout<<'\n';
}
void movZeroEnd(vector<int>& arr) {
    int size = 0;
    for(int i=0; i<arr.size(); ++i) {
        if(arr[i] != 0 ) {
            swap(arr[size], arr[i]);
            size++;
        }
    }
    printArray(arr, size);
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    movZeroEnd(arr);
    return 0;
}