#include<bits/stdc++.h>
using namespace std;

int find(int a[], int n, int k) {
	int count = 0;
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(a[i] + a[j] == k) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << find(a,n,k) << endl;
	}
}
