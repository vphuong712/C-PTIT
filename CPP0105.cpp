#include<bits/stdc++.h>
using namespace std;

void checkNumber(int n) {
	string a = to_string(n);
	for(int i = 0; i < a.length(); i++) {
		if(a[i] == '0' || a[i]== '6' || a[i] == '8') {
			cout << "YES" << endl;
			break;
		} else {
			cout << "NO" << endl;
			break;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		checkNumber(n);
	}
}
