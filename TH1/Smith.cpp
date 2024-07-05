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

int sumN(int n) {
	int x = 0;
	while(n) {
		x += n % 10;
		n = n / 10;
	}
	return x;
}

int check(int n) {
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++) {
		while(n % i == 0) {
			sum += sumN(i);
			n = n / i;
		}
	}
	if(n != 1) {
		sum += sumN(n);
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	if(isPrime(n) == 0 && check(n) == sumN(n))
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
