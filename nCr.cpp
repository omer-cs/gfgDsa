/*
using idea of C(n, r) =  C(n-1, r-1) + C(n-1, r)
*/
#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    if(n==r) return 1;
    if(r==1) return n;
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main() {
    int n, r;
    cin>>n>>r;
    
    cout<<nCr(n,r)<<endl;

    return 0;
}