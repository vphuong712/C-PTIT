#include<bits/stdc++.h>
using namespace std;

void checkNumber(long long n) {
	string str1 = to_string(n);
	string str2;
	for(int i = str1.length() - 1; i >= 0; i--) {
		str2 += str1[i];
	}
	if(str1 == str2) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		checkNumber(n);
	}
}
