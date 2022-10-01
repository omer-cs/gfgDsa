#include<bits/stdc++.h>
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int binarySearchItr(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size()-1;
    int mid = high + (low - high)/2;
    while(low <= high) {
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            low = mid + 1;
        }
        else if(arr[mid] > target) {
            high = mid - 1;
        }
        mid = high + (low - high)/2;
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

    int index = binarySearchItr(arr, target);
    if(index != -1) {
        cout<<"Found at Index : "<<index<<endl;
    }
    else {
        cout<<"Not Found\n";
    }
    return 0;
}