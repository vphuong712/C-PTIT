#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		int sum1 = 0, sum2 = 0;
		for(int i = 0; i < str.size(); i++) {
			if((i+1) % 2 != 0) {
				sum1 += (str[i] - '0');
			} else {
				sum2 += (str[i] - '0');
			}
		}
		if(abs(sum1 - sum2) % 11 == 0) {
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}
}
