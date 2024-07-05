#include<bits/stdc++.h>
using namespace std;

bool check(string a) {
	regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return regex_match(a, pattern);
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string a;
		getline(cin, a);
		if(check(a)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
