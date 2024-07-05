#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
		int n;
		cin >> n;
		int a[n];
		map<int, int> m;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int res = -1;
		for(int i = 0; i < n; i++) {
			m[a[i]]++;
			if(m[a[i]] > 1) {
				res = a[i];
				break;
			}
		}
		cout << res << endl;
    }
}







