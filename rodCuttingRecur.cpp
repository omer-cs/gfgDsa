/*
Given a Rope or rod of length n, you need to find the maximum number of pieces you can make such that length of every piece is in set {a, b, c} for given three values a, b, and c.
*/

#include<bits/stdc++.h>
using namespace std;

int max(int a, int b, int c) {
    if(a > b && a > c) return a;
    else if( b > a && b > c) return b;
    else return c;
}

int maxCuts(int n, int a, int b, int c) {
    if(n == 0) return 0;
    if(n < 0) return -1;

    int res = max(maxCuts(n-a, a, b, c), maxCuts(n-b, a, b, c), maxCuts(n-c, a, b, c));
    if(res == -1) return -1;
    return res+1;

}

int main() {
    int n, a, b, c;
    cin>>n>>a>>b>>c;

    cout<<maxCuts(n, a, b, c)<<'\n';
    return 0;
}