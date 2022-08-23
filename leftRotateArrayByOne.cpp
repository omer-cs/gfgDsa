#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr) {
    for(int i=0; i<arr.size(); ++i)
        cout<<arr[i]<<' ';
    cout<<'\n';
}

void leftRotate(vector<int>& arr) {
	int temp = arr[0];
	int i;
	for(i=1; i<arr.size(); ++i)
		arr[i-1] = arr[i];
	arr[i-1] = temp;
}

int main() {
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; ++i)
		cin>>arr[i];
	leftRotate(arr);
	printArray(arr);	
	return 0;
}
