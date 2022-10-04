#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int sqrtFloor(int n) { // Naive solutions Time complecity is O(n^1/2)
    int i=1;
    while(i*i <= n) {
        i++;
    }
    return i-1;
}

int findSqrtFloor(int n) {      // Binary Search approach
    int low = 1;
    int high = n;
    int ans = -1;
    while(low <= high) {
        int mid = high + (low - high)/2;

        if(mid * mid == n)  {
            return mid;
        }
        else if(mid*mid > n) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
            ans = mid;            
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;

    cout<<findSqrtFloor(n)<<endl;
    return 0;
}