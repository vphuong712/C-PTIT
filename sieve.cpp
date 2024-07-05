#include<bits/stdc++.H>
using namespace std;

int prime[10000001];

void sieve() {
	for(int i = 0; i < 10000001; i++) {
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000001); i++) {
		if(prime[i]) {
			for(int j = i*i; j < 10000001; j += i) {
				prime[j] = 0;
			}
		}
	}
}

int main() {
	sieve();
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int count = 0;
		int res;
		for(int i = 2; i <= n; i++) {
			if(n % i == 0 && prime[i]) {
				count++;
			}
			if(count == k) {
				res = i;
				break;
			}
		}
		cout << res << endl;
	}
}


