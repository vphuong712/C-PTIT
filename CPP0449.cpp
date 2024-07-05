#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int check = -1;
		for(int i = 0; i < n; i++) {
			if(binary_search(a, a + n, k + a[i])) {
				check = 1;
				break;
			}
		}
		cout << check << endl;
	}
}
