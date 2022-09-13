#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

char firstNonRepeatChar(string str) {
    char temp;
    int n = str.length();
    unordered_map<char,int>Map;
    for(int i = 0; i<n; ++i) {
        Map[str[i]]++;
    }
    for(int i =0; i<n; ++i)
        if(Map[str[i]] == 1) {
            temp = str[i];
            break;
        }
    return temp;
}

int main() {
    string str;
    cin>>str;

    cout<<firstNonRepeatChar(str)<<endl;

    return 0;
}