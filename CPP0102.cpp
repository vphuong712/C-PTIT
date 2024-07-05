#include<bits/stdc++.h>
using namespace std;

char convertChar(char n) {
	int ascii;
	if(int(n) >= 65 && int(n) <= 90) {
		ascii = int(n) + 32;
	} else if (int(n) >= 97 && int(n) <= 122) {
		ascii = int(n) - 32;
	}
	return char(ascii);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		char n;
		cin >> n;
		cout << convertChar(n) << endl;
	}
}
