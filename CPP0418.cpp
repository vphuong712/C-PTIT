#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		set<int> s1;
		set<int> s2;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			s1.insert(a[i]);
		}
		for(int i = 0; i < m; i++) {
			cin >> b[i];
			s1.insert(b[i]);
		}
		for(auto x : s1) {
			cout << x << " ";
		}
		cout << endl;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(a[i] == b[j]) {
					s2.insert(b[j]);
				}
			}
		}
		for(auto x : s2) {
			cout << x << " ";
		}
		cout << endl;
	}
}
