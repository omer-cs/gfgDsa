#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool twoSumSet(vector<int>& arr, int k) { // does not work for repetitive elements in array
    int n = arr.size();
    unordered_set<int> Set;
    for(int i=0; i<n; ++i) {
        if(Set.find(k-arr[i]) != Set.end()) {
            // cout<<*(Set.find(k-arr[i]))<<" "<<arr[i]<<endl;
            return 1;
        }
        Set.insert(arr[i]);
    }
    return 0;
}

bool twoSumMap(vector<int>& arr, int k) {
    int n = arr.size();
    unordered_map<int, int> Map;

    for(int i=0; i<n; ++i) {
        if(Map.find(k-arr[i]) != Map.end()) {
            // cout<<k-arr[i]<<" "<<arr[i]<<endl;
            return 1;
        }
        Map[arr[i]]++;
    }
    return 0;
}

int main() {
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; ++i) {
        cin>>arr[i];
    }
    int k;
    cin>>k;

    if(twoSumMap(arr,k))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}