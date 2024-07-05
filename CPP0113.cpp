#include<bits/stdc++.h>
using namespace std;

bool check(long long n) {
	vector<int> v;
	while(1) {
		int m = n % 10;
		v.push_back(m);
		n = n / 10;
		if(v.size() == 2)
			break;
	}
	if(v[0] == 6 && v[1] == 8)
		return 1;
	return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		cout << check(n) << endl;
	}
}
