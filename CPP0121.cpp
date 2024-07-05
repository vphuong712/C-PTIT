#include<bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b) {
	if(b == 0)
		return a;
	return gcd(b , a % b);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long a, b;
		cin >> a >> b;
		int res = gcd(a, b);
		long long lcm = a * b / res;
		cout << lcm << " " << res << " " << endl;
	}
}
