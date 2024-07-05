#include<bits/stdc++.h>
using namespace std;

void primeSpread(int n) {
	int count = 0;
	for(int i = 2; i <= n; i++) {
		if(n % i == 0) {
			int count = 0;
			while(n % i == 0) {
				count++;
				n = n / i;
			}
			cout << i << " " << count << " ";
		}
		if(n == 1) {
			break;
		}
	}
//	if(n > 1) {
//		cout << n << " 1";
//	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		primeSpread(n);
	}
}
