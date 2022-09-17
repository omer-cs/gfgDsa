#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

void countCharFrequency(string str) {
    int arr[26] = {0};

    for(int i=0; i<str.length(); ++i) {
        arr[str[i]-'a']++;
    }
    for(int i=0; i< 26; ++i) {
        if(arr[i]> 0) {
            cout<<(char)(i+'a')<<' '<<arr[i]<<endl;
        }
    }
}

int main() {

    string str;
    cin>>str;

    countCharFrequency(str);

    return 0;
}