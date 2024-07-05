#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
	if(n < 2)
		return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		if(isPrime(n))
			cout << n << endl;
		int i = 2;
		while(i <= n) {
			if(n % i == 0 && isPrime(n / i)) {
				cout << n / i << endl;
				break;
			}
			i++;
		}
	}
}
