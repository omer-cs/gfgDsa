#include<bits/stdc++.h>
using namespace std;

struct MyHash {
	int Bucket;
	list<int> *table;
	MyHash(int bucketSize) {
		Bucket = bucketSize;
		table = new list<int>[bucketSize];
	}
	void insert(int key) {
		int i = key % Bucket;
		table[i].push_back(key);
	}
	void remove(int key) {
		int i = key % Bucket;
		table[i].remove(key);
	}
	bool search(int key) {
		int i = key % Bucket;
		for(auto x: table[i]) {
			if(x == key)
				return true;
		}
		return false;
	}
};

int main() {
	
	MyHash mh(7);
	mh.insert(10);
	mh.insert(20);
	mh.insert(15);
	mh.insert(7);

	cout<<mh.search(7)<<endl;
	mh.remove(15);
	cout<<mh.search(15)<<endl;
	return 0;
}
