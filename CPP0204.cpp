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

int main() {
	int t;
	cin >> t;
	while(t--) {
		int l, r;
		cin >> l >> r;
		int count = 0;
		for(int i = l; i <= r; i++) {
			if(isPrime(i))
				count++;
		}
		cout << count << endl;
	}
}
