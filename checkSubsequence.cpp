#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool checkRecur(string s1, string s2, int i=0, int j=0) {
    if(j==s2.length())
        return true;
    if(i==s1.length())
        return false;
    if(s1[i] == s2[j]){
        return checkRecur(s1, s2, i+1, j+1);
    }
    return checkRecur(s1, s2, i+1, j);
}

bool checkRecurMod(string s1, string s2, int n, int m) {    // this solution does require us to calculate the length of the string since we are checking from the end
    if(m==0)
        return true;
    if(n==0)
        return false;
    if(s1[n-1]==s2[m-1])
        return checkRecurMod(s1, s2, n-1, m-1);
    return checkRecurMod(s1, s2, n-1, m);   
}

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
    cout<<checkRecur(s1, s2)<<endl;
    cout<<checkRecurMod(s1, s2, s1.length(), s2.length())<<endl;
    return 0;
}