#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		set<int> s;
		for(int i = 0; i < n; i++) {
			int x;
			cin >> x;
			while(x) {
				int m = x % 10;
				s.insert(m);
				x /= 10;
			}
		}
		vector<int> v(s.begin(), s.end());
		for(auto e : v) {
			cout << e << " ";
		}
		cout << endl;
	}
}
