#include<bits/stdc++.h>
using namespace std;

int rev(int n, int sum) {
    if(n< 10) return sum*10+n;
    return  rev(n/10, sum*10+n%10);
}

bool checkPalin(int n) {

    return n == rev(n,0);
}

int main() {
    int n;
    cin>>n;

    if(checkPalin(n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}