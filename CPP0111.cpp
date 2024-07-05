#include<bits/stdc++.h>
using namespace std;

bool check(long long n) {
	vector<int> v;
	bool isCheck = false;
	while(n > 0) {
		int m = n % 10;
		v.push_back(m);
		n = n / 10;
	}
	for(int i = 0; i < v.size() - 1; i++) {
		if(abs(v[i] - v[i+1]) != 1) {
			isCheck = true;
			break;
		}
	}
	return isCheck;		
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		if(check(n)) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
}
