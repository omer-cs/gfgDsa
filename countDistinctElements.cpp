#include<bits/stdc++.h>
#define endl '\n'
using namespace std;


int countNonRepeated(vector<int>& arr) {
    unordered_map<int, int> Map;
    int count = 0;
    int n = arr.size();
    for(int i=0; i<n; ++i) {
        Map[arr[i]]++;
    }
    for(auto i: Map) {
        if(i.second == 1)
            count++;
    }
    return count;
}

int main() {

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    
    cout<<countNonRepeated(arr)<<endl;
    return 0;
}