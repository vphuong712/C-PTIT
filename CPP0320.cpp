#include<bits/stdc++.h>
using namespace std;

int check(string str) {
	set<char> s;
	for(int i = 0; i < str.size(); i++) {
		if(!isdigit(str[i]) || str[0] == '0')
			return -1;
	}
	for(int i = 0; i < str.size(); i++) {
		s.insert(str[i]);
	}
	if(s.size() == 10) {
		return 1;
	}
	return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		if(check(str) == -1) {
			cout << "INVALID" << endl;
		} else if(check(str) == 0) {
			cout << "NO" << endl;
		}else {
			cout << "YES" << endl;
		}
	}
}
