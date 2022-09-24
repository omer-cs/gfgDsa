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
        if(Map[str[i]] == 1)
            return i;
    }
    return -1;
}

int fun1(string& str) {
    int count[CHAR] = {0};
    for(int i=0; i<str.length(); ++i) {
        count[str[i]]++;
    }
    for(int i=0; i<str.length(); ++i) {
        if(count[str[i]]==1)
            return i;
    }
    return -1;
}

int fun2(string& str) {
    int fI[CHAR];
    fill(fI, fI+CHAR, -1);
    int n = str.length();
    int res = INT_MAX;
    for(int i=0; i<n; ++i) {
        if(fI[str[i]] == -1) // not visited yet
            fI[str[i]] = i;
        else
            fI[str[i]] = -2; // repeated more than once
    }
    for(int i=0; i<CHAR; ++i) {
        if(fI[i] >= 0)
            res = min(res, fI[i]);
    }

    return (res==INT_MAX) ? -1 : res;
}


int main() {
    string str;
    cin>>str;

    cout<<fun(str)<<endl;
    cout<<fun1(str)<<endl;
    cout<<fun2(str)<<endl;

    return 0;
}