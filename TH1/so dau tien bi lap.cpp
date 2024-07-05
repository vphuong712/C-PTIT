#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		map<int, int> m;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			m[a[i]]++;
		}
		bool isRepeat = false;
		int res;
		for(int i = 0; i < n; i++) {
			if(m[a[i]] > 1) {
				res = a[i];
				isRepeat = true;
				break;
			}
		}
		if(isRepeat) {
			cout << res << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
