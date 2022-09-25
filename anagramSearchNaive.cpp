#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int CHAR = 256;

bool isAnagram(string& str, string& pat, int i) {
    int m = pat.length();
    int count[CHAR] = {0};
    for(int j=0; j<m; ++j) {
        count[pat[j]]++;
        count[str[i+j]]--;
    }
    for(int k=0; k<CHAR; ++k) {
        if(count[k]!=0) {
            return false;
        }
    }
    return true;
}

bool fun(string& str, string& pat) {
    int n=str.length();
    int m=pat.length();

    for(int i=0; i<n-m+1; ++i) {
        if(isAnagram(str, pat, i))
            return true;
    }
    return false;
}

int main() {
    string str, pat;
    cin>>str>>pat;

    cout<<fun(str, pat)<<endl;
    return 0;
}