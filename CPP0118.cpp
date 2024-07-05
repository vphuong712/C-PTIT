#include<bits/stdc++.h>
using namespace std;

int primeSpread(int n) {
	if(n < 2)
		return 0;
	vector<int> v;
	for(int i = 2; i <= n ; i++) {
		while(n % i == 0) {
			v.push_back(i);
			n = n / i;
		}
	}
	if(n > 1) {
		v.push_back(n);
	}
	set<int> s(v.begin(), v.end());
	if(s.size() == v.size())
		return 1;
	return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << primeSpread(n) << endl;
	}
}
