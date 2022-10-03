#include <bits/stdc++.h>
// Hint: Find the first occurence of 1, and return arr.size() - mid
#define endl '\n'
using namespace std;

int countOne(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;
    int mid = 0;
    while(low <= high) {
        mid = high + (low - high)/2;
        if(arr[mid] == 0 ) {
            low = mid + 1;
        }
        else {
            if(mid == 0 || arr[mid-1]!= arr[mid]) {
                return arr.size() - mid;
            }
            else {
                high = mid -1;
            }

        }
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) {
        cin>>arr[i];    
    }
    cout<<countOne(arr)<<endl;
    return 0;
}