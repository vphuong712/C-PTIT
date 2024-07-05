#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int count = 0;
		for(int i = 0; i < s.size() - 1; i++) {
			for(int j = i + 1; j < s.size(); j++) {
				if(s[i] == s[j]) {
					count++;
				}
			}
		}
		cout << s.size() + count << endl;
	}	
}
