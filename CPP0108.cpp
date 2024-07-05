#include<bits/stdc++.h>
using namespace std;

int isPrime(int n) {
	if (n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int isIncrease(int n) {
	while(n >= 10) {
		int m = n % 10;
		if(m <= (n/10) % 10) {
			return 0;
		}
		n = n / 10;
	}
	return 1;
}

int isDecrease(int n) {
	while(n >= 10) {
		int m = n % 10;
		if(m >= (n/10) % 10) {
			return 0;
		}
		n = n / 10;
	}
	return 1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		int count = 0;
		cin >> n;
		for(int i = pow(10, n - 1); i < pow(10, n); i++) {
			if(isIncrease(i) || isDecrease(i)) {
				if(isPrime(i))
					count++;
			}
		}
		cout << count << endl;
	}
}
