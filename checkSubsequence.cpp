#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool checkItr(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();

    int res = 0;
    int i=0, j=0;
    while(i < n) {
        if(s1[i] == s2[j]) {
            i++;
            j++;
        }
        else
            i++;
    }
    return j==m;
}

int main() {
    string s1, s2;

    cin>>s1>>s2;

    cout<<checkItr(s1, s2)<<endl;

    return 0;
}