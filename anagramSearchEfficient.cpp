#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int CHAR = 256;

bool areSame(int* CT, int* CP) {
    for(int i=0; i<CHAR; ++i) {
        if(CT[i]!=CP[i])
            return false;
    }
    return true;
}

bool fun(string& str, string& pat) {
    int CT[CHAR] = {0}, CP[CHAR] = {0};
    int n = str.length();
    int m = pat.length();

    for(int i=0; i<m; ++i) {
        CP[pat[i]]++;
        CT[str[i]]++;
    }

    for(int i=m; i<n; ++i) {
        if(areSame(CT, CP)) {
            return true;
        }
        CT[str[i]]++;
        CT[str[i-m]]--;
    }
    return false;
}

int main() {
    string str, pat;
    cin>>str>>pat;

    cout<<fun(str, pat)<<endl;
    return 0;
}