#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool check(string& s1, string& s2) {
    if(s1.length() != s2.length()) return false;
    return ((s1+s1).find(s2) != string::npos);
}

int main() {
    string s1, s2;
    cin>>s1>>s2;

    if(check(s1, s2)) {
        cout<<"Yes\n";
    }
    else {
        cout<<"No\n";
    }
}