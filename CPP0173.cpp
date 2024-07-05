#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int x, y, z;
		long long n;
		bool isChecked = false;
		cin >> x >> y >> z >> n;
		for(int i = pow(10, n - 1); i < pow(10, n); i++){
			if(i % x == 0 && i % y == 0 && i % z == 0) {
				isChecked = true;
				cout << i << endl;
				break;
			}
		}
		if(!isChecked) {
			cout << "-1" << endl;
		}
	}
}
