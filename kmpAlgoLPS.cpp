#include <bits/stdc++.h>
#include <vector>
#define endl '\n'
using namespace std;

void printArray(vector<int>& arr) {
    for(auto i: arr)
        cout<<i<<' ';
    cout<<endl;
}

void fillLPS(string& str) {     // Original LPS of KMP Algorithm

}

int longPropPreSuff(string& str, int n) {   // helper function
    for(int len=n-1; len>0; --len) {
        bool flag = true;
        for(int i=0; i<len; ++i) {
            if(str[i] != str[n-len+i]) {
                flag = false;
            }
        }
        if(flag) {
            return len;
        }
    }
    return 0;
}

void fillLPSNaive(string str, int* lps) {        // GFG Naive solution
    for(int i=0; i<str.length(); ++i) {
        lps[i] = longPropPreSuff(str, i+1);
    }
}
// If you don't understand Naive approach of gfg try the dry run you will get a clear idea


vector<int> fun(string& str) {      // this is my approach
    vector<int> res;
    int n = str.length();
    for(int i=1; i<=n; ++i) {
        string temp = str.substr(0,i);
        int max = 0;
        for(int j=1; j<i; ++j) {
            // cout<<temp.substr(0,j)<<" "<<temp.substr(i-j,i)<<endl;
            if(temp.substr(0,j) == temp.substr(i-j,i)) {
                if(j > max) {
                    max = j;
                }
            }
        }
        res.push_back(max);
        // cout<<"pass "<<i<<endl;
    }
    return res;
}

int main() {
    string str;
    cin>>str;
    vector<int>result = fun(str);
    printArray(result);

    int lps[str.length()];
    fillLPSNaive(str, lps);
    for(auto i: lps) {
        cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}