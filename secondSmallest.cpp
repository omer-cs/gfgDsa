#include<bits/stdc++.h>
using namespace std;

int secondSmallest(vector<int> arr, int n) {
    int smallest = INT_MAX, sSmallest = INT_MAX;

    for(int i=0; i<n; ++i) {
        if(arr[i] < smallest) {
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest) {
            if(arr[i] < sSmallest)
                sSmallest = arr[i];
        }
    }
    if(sSmallest != INT_MAX)
        return sSmallest;
    return -1;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) cin>>arr[i];
    cout<<secondSmallest(arr, n)<<'\n';
    return 0;
}