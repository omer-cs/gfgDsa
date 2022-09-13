#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool twoSum(vector<int>& arr, int k) {
    int n = arr.size();
    unordered_set<int> Set;
    for(int i=0; i<n; ++i) {
        Set.insert((arr[i]));
    }

    for(int i=0; i<n; ++i) {
        auto temp = Set.find(k-arr[i]);
        if(temp != Set.end() && *(temp) != arr[i]) {
            return true;
        }
    }
    return false;
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

    if(twoSum(arr,k))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}