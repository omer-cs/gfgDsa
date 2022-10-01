#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int binarySearchRecur(vector<int>& arr, int target, int low, int high) {
    if(low > high) return -1;
    int mid = high + (low -high)/2;
    if(arr[mid] == target) {
        return mid;
    }
    else if(arr[mid] > target) {
        return binarySearchRecur(arr, target, low, mid - 1);
    }
    else{
        return binarySearchRecur(arr, target, mid+1, high);
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) {
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int index = binarySearchRecur(arr, target, 0, n);
    if(index != -1) {
        cout<<"Found at Index : "<<index<<endl;
    }
    else {
        cout<<"Not Found\n";
    }
    return 0;
}