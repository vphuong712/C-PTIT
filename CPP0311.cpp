#include<bits/stdc++.h>
using namespace std;



int main() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		map<char, int> m;
		for(int i = 0; i < str.size(); i++) {
			m[str[i]]++;
		}
		cout << m.size();
	}
}
