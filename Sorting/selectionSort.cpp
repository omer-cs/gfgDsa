#include <bits/stdc++.h>
#define endl '\n'
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

void printArray(vector<int>& arr) {
    for(auto i: arr) {
        cout<<i<<' ';
    }
    cout<<endl;
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    int min;
    for(int i=0; i<n-1; ++i) {
        min = i;
        for(int j=i+1; j<n; ++j) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            swap(arr[i], arr[min]);
        }
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
    selectionSort(arr);

    printArray(arr);

    return 0;
}