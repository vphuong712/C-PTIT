#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string tmp;
	string res;
	while(ss >> tmp) {
		res += tmp[0];
	}
	cout << tmp;
	for(int i = 0; i < res.size() - 1; i++) {
		cout << res[i];
	}
	cout << "@ptit.edu.vn" << endl;
}
