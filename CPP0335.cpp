#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++) {
			if(!isdigit(s[i]))
				s[i] = ' ';
		}
		stringstream ss(s);
		string tmp;
		int MAX = -1e6;
		while(ss >> tmp) {
			int res = 0;
			for(int i = 0; i < tmp.size(); i++) {
				res = res * 10 + tmp[i] - '0';
			}
			if(res > MAX)
				MAX = res;
		}
		cout << MAX << endl;
	}
}
