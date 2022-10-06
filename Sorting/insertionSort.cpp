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
    for(int i=1; i<n; ++i) {
        int key = arr[i];
        int j=i-1;
        while(j>0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    fast_cin();

    return 0;
}