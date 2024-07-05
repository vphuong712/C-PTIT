#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string a, b;
		cin >> a;
		cin >> b;
		long long c = stoll(a) + stoll(b);
		string res = to_string(c);
		cout << c << endl;
	}
}
