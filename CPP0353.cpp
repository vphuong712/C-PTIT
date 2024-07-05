#include<bits/stdc++.h>
using namespace std;

void convert(char &c) {
	char cc = toupper(c);
	if(cc == 'A' || cc == 'B' || cc == 'C')
		c = '2';
	else if(cc == 'D' || cc == 'E' || cc == 'F')
		c = '3';
	else if(cc == 'G' || cc == 'H' || cc == 'I')
		c = '4';
	else if(cc == 'J' || cc == 'K' || cc == 'L')
		c = '5';
	else if(cc == 'M' || cc == 'N' || cc == 'O')
		c = '6';
	else if(cc == 'P' || cc == 'Q' || cc == 'R' || cc == 'S')
		c = '7';
	else if(cc == 'T' || cc == 'U' || cc == 'V')
		c = '8';
	else if(cc == 'W' || cc == 'X' || cc == 'Y' || cc == 'Z')
		c = '9';		
}

bool check(string s) {
	string res;
	for(int i = s.size() - 1; i >= 0; i--) {
		res += s[i];
	}
	if(res == s) {
		return true;
	}
	return false;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++) {
			convert(s[i]);
		}
		if(check(s)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
