#include<bits/stdc++.h>
using namespace std;

int A[201];

void sieve() {
	for(int i = 1; i <= 200; i++) {
		A[i] = i;
	}
}

int main() {
	sieve();
	int n;
	cin >> n;
	int a[201];
	int res;
	bool check = false;
	while(n--) {
		int k;
		cin >> k;
		a[k] = k;
		res = k;
	}
	for(int i = 1; i <= res; i++) {
		if(a[i] != A[i]) {
			check = true;
			cout << A[i] << endl;
		}
	}
	if(!check) {
		cout << "Excellent!" << endl;
	}
}
