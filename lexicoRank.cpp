/*
    In this case we assume that all the characters of the string are distinct with no repetition allowed
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int CHAR = 256;

int fact(int n) {
    if(n<=1) {
        return 1;
    }
    return n*fact(n-1);
}

int getRankOfStr(string& str) {
    int count[CHAR] = {0};
    // int count[CHAR];             alternatively we can declare the count array first and fill the values later using fill function
    // fill(count, count+CHAR, 0);    fill function to fill the values as zeores
    int res = 1;
    int n = str.length();
    int mul = fact(n);              // instead of calculating the factorials repeatedly we calculate the factorial once and divide the factorial so that we can get the desired factorial
    for(int i=0; i<n; ++i) {
        count[str[i]]++;        // counting frequency of each character of string
    }
    for(int i=1; i<CHAR; ++i) {
        count[i] += count[i-1];         // finding cumulative sum of frequncy of characters of string
    }

    for(int i=0; i<n-1; ++i) {
        mul = mul/(n-i);         // Calculating the desired factorial by divding by n-i
        res = res + count[str[i]-1]*mul;          // count[str[i]-1] returns the number of smaller characters then str[i]
        for(int j=str[i]; j<CHAR; ++j) {
            count[j]--;                // we need to decrement the number of characters by one to update the array
        }
    }

    return res;
}

int main() {

    string str;
    cin>>str;

    cout<<getRankOfStr(str)<<endl;

    return 0;
}