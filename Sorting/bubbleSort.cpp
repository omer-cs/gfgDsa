#include <bits/stdc++.h>
#include <vector>
#define endl '\n'
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

void printArray(vector<int>& arr) {
    for(auto i: arr) {
        cout<<i<<' ';
    }
    cout<<endl;
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for(int i=0; i<n-1; ++i) {
        swapped = false;           // We are making use of this optimization to check if the array gets sorted in between the passes
        for(int j=0; j<n-i-1; ++j) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;     // If the swapping is happening for any of the pass, we make swapped flag as false
            }
        }
        if(swapped == false) {        // If there was no swapping during any of the pass that means the array is already sorted
            break;
        }
    }
}

int main() {
    fast_cin();

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; ++i) {
        cin>>arr[i];
    }
    bubbleSort(arr);

    printArray(arr);
    return 0;
}