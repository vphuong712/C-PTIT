#include<bits/stdc++.h>
using namespace std;
unsigned long long findFibo(int n) {
	unsigned long long f1 = 1;
	unsigned long long f2 = 1;
	unsigned long long f;
	int count = 2;
	if(n < 1 || n > 92) 
		return -1;
	if(n == 1 || n == 2) {
		return f1;
	}
	while(count < n) {
		f = f2 + f1;
		count++;
		f1 = f2;
		f2 = f;
	}
	return f;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << findFibo(n) << endl;
	}
}
