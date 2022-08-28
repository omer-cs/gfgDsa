#include<bits/stdc++.h>
using namespace std;

void allSubsets(string str, string curr="", int index = 0) {

    if(index == str.length()) {
        cout<<curr<<" ";
        return;
    }
    allSubsets(str, curr, index+1);
    allSubsets(str, curr+str[index], index+1);
}

int main() {
    string str;
    cin>>str;

    allSubsets(str);
    cout<<'\n';
    return 0;
}