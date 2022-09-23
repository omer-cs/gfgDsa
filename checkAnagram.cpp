#include<bits/stdc++.h>
using namespace std;
/*
    Naive appraoch to check anagrams is to sort both the strings and traverse in linear manner till we encounter a difference, when encountered difference we return false
*/
const int CHAR = 256; // to store all ascii characters

bool isAnagram(string str1, string str2) {
    int n = str1.length();
    if(n != str2.length())
        return false;
    vector<int>arr(256);
    for(int i=0; i<n; ++i) {
        arr[str1[i]]++;
        arr[str2[i]]--;
    }
    for(int i=0; i<CHAR; ++i) {
        if(arr[i] != 0)
            return false;
    }
    return true;
}

int main() {
    string str1, str2;
    cin>>str1>>str2;

    isAnagram(str1, str2) ? cout<<"Yes\n": cout<<"No\n";
    return 0;
}