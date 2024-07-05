#include<bits/stdc++.h>
using namespace std;

int find(int n) {
	int count = 0;
	for(int i = 1; i <= n; i++) {
		if(n % i == 0){
			if(i % 2 == 0)
				count++;
		}
	}
	return count;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << find(n) << endl;
	}
}
