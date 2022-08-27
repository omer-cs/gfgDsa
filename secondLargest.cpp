#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr, int n) {
    int largest = INT_MIN, sLargest = INT_MIN;

    for(int i=0; i<n; ++i) {
        if(arr[i] > largest) {
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest) {
            if(arr[i] > sLargest)
                sLargest = arr[i];
        }
    }
    if(sLargest != INT_MIN)
        return sLargest;
    return -1;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) cin>>arr[i];
    cout<<secondLargest(arr, n)<<'\n';
    return 0;
}