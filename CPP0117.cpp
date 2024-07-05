#include<bits/stdc++.h>
using namespace std;

void rutGon(long long n) {
	int result = 0;
	while(n > 0) {
		int m = n % 10;
		result += m;
		n = n / 10;
	}
	long long res = result;
	if(result / 10 == 0) {
		cout << result << endl;
		return;
	}
	rutGon(res);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		rutGon(n);
	}
}
