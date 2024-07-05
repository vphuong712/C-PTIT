#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		vector<int> v;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			int k = abs(x - a[i]);
			v.push_back(k);
		}
		for(int i = 0 ; i < n - 1; i++) {
			bool swapped = false;
			for(int j = 0; j < n - i - 1; j++) {
				if(v[j] > v[j+1]) {
					swap(v[j], v[j+1]);
					swap(a[j], a[j+1]);
					swapped = true;
				}
			}
			if(!swapped) {
				break;
			}
		}
		for(int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
