#include <iostream>
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


void insertionSort(vector<int>& arr) {
    int n = arr.size();
    int key, j;
    for(int i=1; i<n; ++i) {            // we start from the second element
        key = arr[i];                   // key so that we can put the key in correct position in sorted part of array
        j = i-1;                        // we go one step back from current index
        while(j>=0 && arr[j]>key) {     // we continue till we reach the 0th index or we arrive at correct postion of key
            arr[j+1] = arr[j];          // while going till the correct postion we move the copy previous element to the present element
            j--;    
        }
        arr[j+1] = key;                 // we are at correct position of key so we replace arr[j+1] with key
    }
}

int main() {
    fast_cin();
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) {
        cin>>arr[i];
    }

    insertionSort(arr);

    printArray(arr);
    return 0;
}