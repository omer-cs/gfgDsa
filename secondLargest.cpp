#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr, int n) {
    int largest = INT_MIN, slargest = INT_MIN;

    for(int i=0; i<n; ++i) {
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest) {
            if(arr[i] > slargest)
                slargest = arr[i];
        }
    }
    if(slargest != INT_MIN)
        return slargest;
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