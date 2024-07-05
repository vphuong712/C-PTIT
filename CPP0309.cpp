#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string str;
		getline(cin, str);
		stringstream ss(str);
		string tmp;
		int count = 0;
		while(ss >> tmp) {
			count++;
		}
		cout << count << endl;
	}
}
