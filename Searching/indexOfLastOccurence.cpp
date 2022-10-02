#include <bits/stdc++.h>
#include <vector>
#define endl '\n'
using namespace std;

int getIndexRecur(vector<int>& arr, int x, int low , int high) {
    if(low > high) return -1;

    int mid = high + (low - high)/2;

    if(arr[mid] > x) {
        return getIndexRecur(arr, x, low, mid-1);
    }
    else if(arr[mid] < x) {
        return getIndexRecur(arr, x, mid+1, high);
    }
    else {
        if(mid == arr.size() -1 || arr[mid+1] != arr[mid]) {
            return mid;
        }
        else {
            return getIndexRecur(arr, x, mid+1, high);
        }
    }
}

int getIndex(vector<int>& arr, int x ) {
    int low = 0;
    int high = arr.size()-1;
    int mid;
    while(low<=high) {
        mid = high + (low - high)/2;
        if(arr[mid] > x) {
            high = mid -1;
        }
        else if(arr[mid] < x) {
            low = mid + 1;
        }
        else {
            if(mid == arr.size() || arr[mid+1] != arr[mid]) { // either we are at the right end of the array or we are the last occurence
                return mid;
            }
            else {
                low = mid + 1;
            }
        }
    }
    return -1;
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

    cout<<getIndexRecur(arr, target, 0, n-1)<<endl;
    cout<<getIndex(arr, target)<<endl;
    return 0;
}