#include <bits/stdc++.h>
#include <vector>
#define endl '\n'
using namespace std;

int getIndex(vector<int>arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int mid;
    while(low <= high) {
        mid = high + (low - high)/2;
        if(arr[mid] < target) {
            low = mid + 1;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else {
            if(mid == 0 || arr[mid-1] != arr[mid]) {    // either we are at left end of the array or we have found the first occurence of given element
                return mid;
            }
            else {
                high = mid-1;
            }
        }
    }
    return -1;
}

int getIndexRecur(vector<int>& arr, int x, int low, int high) {
    if(low > high) return -1;
    int mid = high + (low - high)/2;
    if(arr[mid] > x) {
        return getIndexRecur(arr, x, low, mid-1);
    }
    else if(arr[mid] < x) {
        return getIndexRecur(arr, x, mid+1, high);
    }
    else {
        if(mid == 0 || arr[mid-1] != arr[mid]) {
            return mid;
        }
        else {
            return getIndexRecur(arr, x, low, mid-1);
        }
    }

}

int main() {

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; ++i) {
        cin>>arr[i];
    }
    int target;
    cin>>target;


    cout<<getIndex(arr, target)<<endl;
    cout<<getIndexRecur(arr, target, 0, n-1)<<endl;
    return 0;
}