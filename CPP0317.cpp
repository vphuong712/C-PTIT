#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
	string res;
	for(int i = 0; i < s.size(); i++) {
		if((s[i] - '0') % 2 != 0)
			return false;
	}
	for(int i = s.size() - 1; i >= 0; i--) {
		res += s[i];
	}
	for(int i = 0; i < s.size(); i++) {
		if(s[i] != res[i])
			return false;
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		if(check(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
