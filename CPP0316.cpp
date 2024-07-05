#include<bits/stdc++.h>
using namespace std;

int solve(string str) {
	int sum = 0;
	for(int i = 0; i < str.size(); i++) {
		sum += str[i] - '0';
	}
	if(sum < 10) {
		return sum;
	} else {
		string res = to_string(sum);
		return solve(res);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		if(solve(str) == 9) {
			cout << 1 << endl;
		}else {
			cout << 0 << endl;
		}
	}
}
