#include<bits/stdc++.h>
using namespace std;

bool isPalin(string &str, int left, int right) {
    if(left >= right)
        return true;
    return (str[left] == str[right]) && isPalin(str, left+1, right-1);
}

int main() {

    string str;
    cin>>str;

    if(isPalin(str, 0, str.length()-1))
        cout<<"Yes\n";
    else
        cout<<"No\n";

    return 0;
}