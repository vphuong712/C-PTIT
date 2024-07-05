#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		vector<int> v;
		for(int i = 1; i <= k; i++) {
			for(int j = 1; j <= n; j++) {
				int x;
				cin >> x;
				v.push_back(x);
			}
		}
		sort(v.begin(), v.end());
		for(auto e : v) {
			cout << e << " ";
		}
		cout << endl;
	}
}
