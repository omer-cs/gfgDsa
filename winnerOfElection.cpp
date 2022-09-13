#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

pair<string,int> getWinner(vector<string> arr) {

    int n = arr.size();
    unordered_map<string, int> Map;
    
    for(int i=0; i<n; ++i) {
        Map[arr[i]]++;
    }

    string res = "";
    int Max = INT_MIN;

    for(auto i : Map) {
        if(i.second > Max) {
            Max = i.second;
            res = i.first;
        }
        else if( i.second == Max) {
            if(i.first < res) {
                res = i.first;
            }
        }
    }
    return make_pair(res, Max);
}

int main() {
    int n;
    cin>>n;

    vector<string> arr(n);
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    
    pair<string,int> result = getWinner(arr);
    cout<<result.first<<' '<<result.second<<endl;
    return 0;
}