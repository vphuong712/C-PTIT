#include<bits/stdc++.h>
using namespace std;

int find(int n) {
	int count = 0;
	for(int i = 1; i <= n; i++) {
		if(n % i == 0){
			count++;
		}
	}
	if(count == 3)
		return 1;
	return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 4; i <= n; i++) {
			if(find(i)) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
