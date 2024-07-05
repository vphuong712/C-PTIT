#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		map<char, int> m;
		set<char> v;
		for(int i = 0; i < str.size(); i++) {
			str[i] = toupper(str[i]);
			m[str[i]]++;
		}
		for(int i = 0; i < str.size(); i++) {
			if(m[str[i]] != 0) {
				cout << str[i] << m[str[i]];
			}
			m[str[i]] = 0;
		}
		cout << endl;
	}
}
