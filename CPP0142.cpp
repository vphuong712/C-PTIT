#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if(n < 2)
		return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int gcd(int a, int b) {
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int check(int n) {
	int count = 0;
	for(int i = 1; i <= n; i++) {
		if(gcd(i, n) == 1) {
			count++;
		}
	}
	if(isPrime(count))
		return 1;
	return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int x;
		cin >> x;
		cout << check(x) << endl;
	}
}
