#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if(n < 2)
		return false;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0)
			return false;
	}
	return true;
}

int find(int n) {
	if(n == 1)
		return 1;
	if(n % 2 == 0)
		return 2;
	for(int i = 1; i <= n; i++){
		if(isPrime(i)){
			if(n % i == 0) {
				return i;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++) {
			cout << find(i) << " ";
		}
		cout << endl;
	}
}
