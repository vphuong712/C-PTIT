#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	int count = 0;
	map<string, int> m;
	while(n--) {
		string s;
		getline(cin, s);
		for(int i = 0; i < s.size(); i++) {
			s[i] = toupper(s[i]);
		}
		m[s]++;
	}
	for(auto x : m) {
		if(x.second >= 1)
			count++;
	}
	cout << count << endl;
}
