#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void fillLPS(string& pat, int* lps) {
    int m = pat.length();
    lps[0]=0;
    int len = 0;
    int i = 1;
    while(i<m) {
        if(pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if(len == 0) {
                lps[i] = 0;
                i++;
            }
            else {
                len = lps[len-1];
            }
        }
    }
}

void kmp(string& txt, string& pat) {
    int n = txt.length();
    int m = pat.length();
    int lps[m];
    fillLPS(pat, lps);
    int i=0, j=0;
    while(i<n) {
        if(txt[i] == pat[j]) {
            i++;
            j++;
        }
        if(j==m) {
            cout<<i-j<<' ';
            j=lps[j-1];
        }
        else if(i<n && txt[i] != pat[j]) {
            if(j==0) {
                i++;
            }
            else {
                j=lps[j-1];
            }
        }
    }
    cout<<endl;
}

int main() {

    string txt, pat;
    cin>>txt>>pat;

    kmp(txt, pat);

    return 0;
}