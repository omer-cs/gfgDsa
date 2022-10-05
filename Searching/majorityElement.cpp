#include <bits/stdc++.h>
#include <vector>
#define endl '\n'
using namespace std;

int findWinner(vector<int>& arr) {      // Moores voting algorithm to find winner of the election
    int count = 0;
    int temp = 0;
    for(int i=0; i<arr.size(); ++i) {
        if(count == 0) {
            temp = arr[i];
        }
        if(temp == arr[i]) {
            count++;
        }
        else {
            count--;
        }
    }
    return temp;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) {
        cin>>arr[i];
    }
    cout<<findWinner(arr)<<endl;
    return 0;
}