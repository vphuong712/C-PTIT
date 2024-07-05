#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	string k;
	cin >> k;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp) {
		if(tmp == k)
			tmp = "";
		if(tmp != "") {
			cout << tmp << " ";
		}
	}
	cout << endl;
}
