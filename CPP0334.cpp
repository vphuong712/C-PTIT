#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		string tmp;
		int sum = 0;
		for(int i = 0; i < str.size(); i++) {
			if(!isdigit(str[i])) {
				str[i] = ' ';
			}
		}
		stringstream ss(str);
		while(ss >> tmp) {
			int x = 0;
			for(int i = 0; i < tmp.size(); i++) {
				x = x * 10 + tmp[i] - '0';
			}
			sum += x;
		}
		cout << sum << endl;
	}
}
