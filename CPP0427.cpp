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
		for(int i = 0; i < n - 1; i++) {
			int j = i + 1;
			if(a[i] != 0 && a[i] == a[j]) {
				a[i] *= 2;
				a[j] = 0;
			}
		}
		for(int i = 0; i < n; i++) {
			if(a[i] != 0) {
				cout << a[i] << " ";
			}
		}
		for(int i = 0; i < n; i++) {
			if(a[i] == 0) {
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}
