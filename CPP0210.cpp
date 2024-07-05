#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int MAX = -1e6;
		bool check = false;
		for(int i = 0; i <= n - 2; i++) {
			for(int j = i + 1; j <= n - 1; j++) {
				if(a[j] > a[i]) {
					if(a[j] - a[i] > MAX) {
						MAX = a[j] - a[i];
						check = true;
					}
				}
			}
		}
		if(check) 
			cout << MAX << endl;
		else 
			cout << -1 << endl;
	}
}
