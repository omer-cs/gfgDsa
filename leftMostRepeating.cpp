#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int CHAR = 256;

int fun(string& str) {
    unordered_map<char, int> Map;
    int n = str.length();
    for(int i=0; i<n; ++i) {
        Map[str[i]]++;
    }
    for(int i=0; i<n; ++i) {
        if(Map[str[i]] > 1)
            return i;
    }
    return -1;
}

int fun1(string& str) {             // More efficient approach that traverses string only once
    int fIndex[CHAR];
    fill(fIndex, fIndex+CHAR, -1);  // fills array with a specific value
    int res = INT_MAX;
    int n = str.length();
    for(int i=0; i<n; ++i) {
        if(fIndex[str[i]] == -1)
            fIndex[str[i]]=i;
        else
            res = min(res, fIndex[str[i]]);
    }
    return (res == INT_MAX) ? -1 : res;
}

int fun2(string& str) {             // More optimized approach since we dont need to do comparisions
    bool visited[CHAR];
    fill(visited, visited+CHAR, false);
    int res = -1;
    int n = str.length();
    for(int i=n-1; i>=0; --i) {
        if(visited[str[i]])
            res = i;
        else
            visited[str[i]]=true;
    }
    return res;
}

int main() {
    string str;
    cin>>str;

    cout<<fun(str)<<endl;
    cout<<fun1(str)<<endl;
    cout<<fun2(str)<<endl;

    return 0;
}