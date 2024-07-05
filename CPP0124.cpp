#include<bits/stdc++.h>
using namespace std;

void primeSpread(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		int count = 0;
		while(n % i == 0) {
			count++;
			n = n / i;
		}
		if(n == i) break;
		if(count != 0) {
			cout << i << " " << count << endl;
		}
	}
	if(n > 1) {
		cout << n << " 1";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	primeSpread(n);
}
