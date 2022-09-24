#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
/*
    In this program we are assuming that all the characters in the pattern are distinct
*/
vector<int> findPattern(string str, string pattern) {
    vector<int> result;
    int n = str.length();
    int m = pattern.length();

    for(int i=0; i<n-m+1;) {
        bool flag = true;
        int j;
        for(j=0; j<m; ++j) {
            if(str[i+j] != pattern[j]) {
                flag = false;
                break;
            }
        }
        if(flag) {
            result.push_back(i);
        }
        if(j==0) {
            ++i;
        }
        else {
            i=i+j;
        }
    }
    return result;
}

int main() {
    string str, pattern;
    cin>>str>>pattern;
    vector<int>result = findPattern(str, pattern);

    for(auto i: result) {
        cout<<i<<' ';
    }
    cout<<endl;

    return 0;
}