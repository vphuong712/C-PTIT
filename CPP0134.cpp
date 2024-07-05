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

int check(int n, int k) {
	int count = 0;
	for(int i = 2; i <= n; i++){
		while(n % i == 0 && isPrime(i)) {
			count++;
			if(count == k)
				return i;
			n = n / i;
		}
	}
	return -1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		cout << check(n, k) << endl;
	}
}
