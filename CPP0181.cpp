#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		long long a, x, y;
		cin >> a >> x >> y;
		int d = gcd(x, y);
		for(int i = 1; i <= d; i++) {
			cout << a << endl;
		}
	}
}
