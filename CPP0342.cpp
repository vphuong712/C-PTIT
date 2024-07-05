#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		map<char, int> mp;
		int sum = 0;
		for(int i = 0; i < s.size(); i++) {
			if(isdigit(s[i])) {
				sum += s[i] - '0';
			} else {
				mp[s[i]]++;
			}
		}
		for(auto x : mp) {
			for(int i = 1; i <= x.second; i++) {
				cout << x.first;
			}
		}
		string res = to_string(sum);
		cout << res << endl;
	}
}
