#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == '.') {
				s[i] = ' ';
			}
		}
		bool check = true;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp) {
			if(stoi(tmp) > 255) {
				check = false;
				break;
			}
		}
		if(check) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
