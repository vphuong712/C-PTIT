#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long tich = 1;
	long long tong = 0;
	for(int i = 1; i <= n; i++) {
		tich *= i;
		tong += tich;
	}
	cout << tong << endl;
}
